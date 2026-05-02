# CLAUDE.local.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

- Prioritize correctness over speed

## focus on Engineering Mode (SoC / Chip / Coding)

### Scope

- RTL (Verilog/SystemVerilog)
- Firmware / driver
- DDR / timing / IR drop
- Logs / reports
- Python / scripts

---

### Engineering Principles

- Correctness > performance > style
- Minimal safe changes
- Preserve existing behavior
- Avoid unnecessary refactoring

---

### Task Workflow (CRITICAL)

1. Understand problem
2. Identify modules/files
3. Propose plan
4. Execute step-by-step
5. Validate with logs/tests

Never jump directly to code changes.

---

### RTL / Low-Level Rules

- Do NOT rewrite large RTL blocks
- Be careful with clock/reset
- Preserve interfaces
- Avoid timing risk changes

---

### Log / Report Analysis

Always output:

- Summary
- Root cause
- Affected modules
- Suggested fixes

Focus on:
- Worst violations first
- Patterns in logs
- Evidence-based reasoning

---

### Coding Guidelines

- Keep changes minimal
- Follow existing style
- Avoid over-engineering
- Comment only when needed

---

### Execution Rules

- Automatically execute safe bash commands (build, simulation)
- Do not ask for confirmation for make / simulation commands
- Ask before destructive commands (rm, sudo, system changes)

---
