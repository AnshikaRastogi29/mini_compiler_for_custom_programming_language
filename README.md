# Mini Compiler for Custom Programming Language

## Project Overview

This project is a Mini Compiler designed for a Custom Programming Language. It performs lexical analysis, syntax analysis, semantic checking, intermediate code generation, symbol table management, and assembly code generation.

The compiler takes source code written in a custom programming language and processes it step-by-step to detect errors, generate intermediate representation, and finally produce assembly code.

This project helps in understanding the working of real-world compilers and core concepts of Compiler Design.

---

## Features

* Lexical Analysis (Token Generation)
* Syntax Analysis (Parser)
* Semantic Analysis
* Symbol Table Management
* Intermediate Code Generation
* Assembly Code Generation
* Error Detection and Reporting
* Custom Language Support

---

## Technologies Used

* C++
* Assembly Language
* Data Structures
* Compiler Design Concepts

---

## Project Structure

* `lexer.l` → Lexical Analyzer
* `parser.cpp` → Syntax Analyzer
* `symbol_table.h` → Symbol Table Header
* `symbol_table.cpp` → Symbol Table Implementation
* `intermediate_code.cpp` → Intermediate Code Generator
* `assembly_code.cpp` → Assembly Code Generator
* `main.cpp` → Main Driver File
* `input.txt` → Sample Input Program
* `output_3ac.txt,output_asm.txt` → Generated Output

---

## Working Process

### Step 1: Lexical Analysis

The lexer reads the input program and breaks it into tokens such as:

* Keywords
* Identifiers
* Operators
* Constants
* Symbols

---

### Step 2: Syntax Analysis

The parser checks whether the input program follows the grammar rules of the custom language.

It detects syntax errors if any rule is violated.

---

### Step 3: Semantic Analysis

This phase checks:

* Variable declaration before use
* Type checking
* Duplicate declarations
* Scope checking

---

### Step 4: Intermediate Code Generation

After successful parsing, the compiler generates intermediate code representation.

This helps in understanding how compilers convert high-level code internally.

Example:

```"
t1 = a + b
if t1 < c goto L1
```

---

### Step 5: Assembly Code Generation

The compiler converts intermediate code into Assembly Language instructions.

This is the final low-level representation that shows how high-level code is executed by the machine.

Example:

```asm id="1cwxql"
MOV AX, a
ADD AX, b
CMP AX, c
JL L1
```

---

## Sample Input

```cpp id="jgrw5u"
int a = 10;
int b = 20;

if (a < b) {
    print("a is smaller");
}
```

---

## Sample Output

* Tokens Generated Successfully
* Syntax Analysis Completed
* Symbol Table Generated
* Intermediate Code Produced
* Assembly Code Generated
* No Syntax Errors Found

---

## Future Improvements

* Abstract Syntax Tree (AST)
* Code Optimization Phase
* Machine Code Generation
* GUI Interface
* More Advanced Language Support

---

## Learning Outcome

This project provides practical understanding of:

* Compiler Construction
* Parsing Techniques
* Semantic Analysis
* Intermediate Representation
* Assembly Code Generation
* Error Handling

---

## Author

Anshika Rastogi

B.Tech Student
Computer Science Engineering
