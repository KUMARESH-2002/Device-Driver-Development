# 🛠️ Device Driver Development for STM32F407 (Bare-Metal, Register-Level)

This repository contains custom device drivers written in bare-metal C for the STM32F407 microcontroller. Each driver is developed from scratch using **direct register access**, without relying on vendor libraries such as STM32 HAL or LL. The goal is to build a reusable, scalable, and minimal hardware abstraction layer for STM32 peripherals.

## 📌 Key Highlights

- ✅ Bare-metal development using STM32F407 (ARM Cortex-M4)
- ✅ Direct access to memory-mapped peripheral registers
- ✅ No HAL, no LL — register-level driver code
- ✅ Clean API design using enums, structs, and macros
- ✅ Modular and portable driver structure

## 📦 Included Drivers

| Peripheral | Status     | Description                                      |
|------------|------------|--------------------------------------------------|
| GPIO       |  Complete  | Full digital I/O control (mode, speed, output)  |
| RCC        |    WIP     | Clock control for enabling peripheral access    |

