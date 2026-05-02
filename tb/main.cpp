// Main wrapper for Verilator simulation with FST waveform tracing
#include <verilated.h>
#include <verilated_fst_c.h>
#include "Vlpddr4_sim_tb.h"
#include <iostream>

int main(int argc, char** argv) {
    // Initialize Verilator context
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);

    // Enable tracing before creating model
    Verilated::traceEverOn(true);

    // Create model
    Vlpddr4_sim_tb* top = new Vlpddr4_sim_tb{contextp, "lpddr4_sim_tb"};

    // FST waveform tracing
    VerilatedFstC* tfp = new VerilatedFstC;
    top->trace(tfp, 99);
    tfp->open("lpddr4_sim.fst");

    uint64_t eval_count = 0;

    std::cout << "Starting LPDDR4 simulation with waveform..." << std::endl;

    // Run simulation with proper timing
    while (!contextp->gotFinish()) {
        // Process all events at current time
        top->eval_step();

        // Dump waveform
        tfp->dump(contextp->time());

        // After processing, if no more events pending, we're done
        if (!top->eventsPending()) {
            std::cout << "No more events pending at eval #" << eval_count << std::endl;
            break;
        }

        // Get next time slot and advance
        uint64_t next_time = top->nextTimeSlot();

        // Safety: if time isn't advancing, break to avoid infinite loop
        if (next_time <= contextp->time()) {
            std::cout << "Time not advancing: cur=" << contextp->time()
                      << " next=" << next_time << " at eval #" << eval_count << std::endl;
            break;
        }

        // Advance simulation time to next event
        contextp->time(next_time);

        eval_count++;
        if (eval_count % 10000 == 0) {
            std::cout << "Eval #" << eval_count << " at time=" << next_time << std::endl;
        }

        // Large eval limit for long simulations
        if (eval_count > 100000000) {
            std::cout << "Eval limit reached at eval #" << eval_count << std::endl;
            break;
        }
    }

    // Final
    tfp->flush();
    top->final();
    tfp->close();

    delete top;
    delete tfp;
    delete contextp;

    std::cout << "Simulation finished after " << eval_count << " evals" << std::endl;
    return 0;
}