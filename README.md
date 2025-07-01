# Digital Console Clock

> A C++ console clock with zero-padded time, colorized seconds, and a clean class-based design.

---

## Overview

The **Digital Console Clock** is a lightweight C++ program that turns your Windows terminal into a live, real-time clock.  
I built it to sharpen my skills with:

- Modern C++17 (`<chrono>`, `<thread>`, `<iomanip>`)
- Windows-specific console APIs (`SetConsoleTextAttribute`)
- Modular, header-driven class design

---

## Build Instructions

Open a Developer PowerShell or comand prompt in the project folder and compile **both** source files:

```bash
# Using MinGW g++
g++ -std=c++17 main.cpp clock.cpp -o clock.exe
