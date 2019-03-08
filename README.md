
# pros-node-debugger-library

**Warning**: This project is still WIP, and many features **will** change in future.

A C++ library for **PROS v5** for wired *(wireless with RPi)* debugging, code uploading, etc.

## 🔧 Installation

### Prerequisites

- [**PROS for V5**](https://pros.cs.purdue.edu/) installed on your local machine or on Raspberry Pi attached to the brain.

- [**pros-node-debugger-server**](https://github.com/kekland/pros-node-debugger-server) running on either your local machine or on Raspberry Pi hooked up to the brain.

Currently, the only way to install this library to your PROS project is by manually copying the library files to your `/src` folder.

### Copy the repository

```bash
git clone https://github.com/kekland/pros-node-debugger-library.git
```

### Move the /debugger folder into your project

```bash
mv pros-node-debugger-library/src/debugger /my-vex-project/src
```

### Add the debugger header into your main.h

```bash
nano /my-vex-project/include/main.h
# Add #include "../src/debugger/debugger.hpp" after #include "api.h"
```

## 👽 Usage

Unfortunately, this library is still **WIP**, and it is being heavily tested. But, I will add instructions on how to use it later.

If you are desperate to try and use this library, you can look under `/src/opcontol.cpp`.

## 📧 Contact me

**E-Mail**: kk.erzhan@gmail.com