# Introduction to Programming — Module 1 (Full Detailed Markdown)

## 1.1 Programming (General)

### Computer Program Basics
Computer programs are abundant in modern life, powering applications in smartphones, businesses, vehicles, and more.

A computer program consists of instructions executed one at a time.

#### Core Instruction Types
- **Input**: Getting data (keyboard, file, touchscreen, network)
- **Process**: Performing computations (e.g., x + y)
- **Output**: Sending data (screen, file, network)

#### Variables
Variables store data and can change value during execution.

---

### Example: Basic Program

```
x = Get next input
y = Get next input
z = x + y
Put z to output
```

Example:
- Input: 2, 5
- Output: 7

---

### Programs are like recipes
A program is similar to a cooking recipe: a sequence of instructions executed step-by-step.

---

## 1.2 Programming Basics

### Basic C++ Program Example

```cpp
#include <iostream>
using namespace std;

int main() {
    int wage;
    wage = 20;

    cout << "Salary is ";
    cout << wage * 40 * 52;
    cout << endl;

    return 0;
}
```

#### Key Concepts
- Execution begins in `main()`
- Statements end with `;`
- Variables store values
- `cout` outputs data

---

### Input
```cpp
cin >> wage;
```

### Output
```cpp
cout << "Hello";
cout << endl;
```

---

## 1.3 Console Input

### With Prompts
```cpp
cout << "Enter value: ";
cin >> value;
```

### Without Prompts
```cpp
cin >> x;
cin >> y;
```

---

## 1.4 Comments and Whitespace

### Comments
```cpp
// single line
/* multi-line */
```

### Whitespace
Used to improve readability; generally ignored by compiler.

---

## 1.5 Errors

### Syntax Errors
- Detected at compile-time
- Example: missing semicolon

### Logic Errors
- Program runs but output is incorrect
- Example: using + instead of *

---

### Debugging Best Practice
1. Fix first error
2. Recompile
3. Repeat

---

## 1.6 Computers and Programs

### Core Components
- Processor (CPU)
- Memory (RAM)
- Storage (SSD)

### Bits
- Binary digits: 0 or 1

---

## 1.7 IDEs

An IDE integrates:
- Editor
- Compiler
- Debugger
- Console

Examples:
- VS Code
- Xcode
- CLion

---

## 1.8 Computer Architecture

- RAM: Fast, temporary
- Storage: Persistent
- CPU: Executes instructions

---

## 1.9 Language History

- C (1978)
- C++ (1985)

---

## 1.10 Problem Solving

Programming focuses on algorithm design and structured problem solving.

---

## 1.11 Why Programming

Benefits:
- High-demand skills
- Strong salaries
- Improves logical thinking

---

## 1.12 Precision

Programming requires exact correctness, including whitespace.

---

## 1.13 Errors and Best Practices

- Compile frequently
- Pay attention to detail
- Fix issues incrementally

---

## 1.14 Additional Examples

Includes salary calculations and string manipulation examples.

---

## Summary

Programming involves:
- Input → Process → Output
- Logical thinking
- Precision and detail

