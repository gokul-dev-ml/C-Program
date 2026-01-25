# ATM Simulation Program (C)



A console-based ATM simulation written in **C**, designed to demonstrate core programming constructs such as **decision-making**, **control flow**, and **user input handling** through a real-world banking scenario.







## Overview



This program simulates basic ATM operations, including balance inquiry, cash deposit, and cash withdrawal with PIN verification. It is implemented as a menu-driven application using structured control logic.



---



## Features



- Balance inquiry

- Secure deposit operation using PIN authentication

- Secure withdrawal operation with balance validation

- Menu-driven interface using `switch-case`

- Clear transaction feedback to the user



---



## Technical Highlights



- Language: **C**

- Control Structures:

  - `switch-case`

  - `if-else`

- Input/Output:

  - `scanf`

  - `printf`

- Program Flow Control:

  - Conditional branching

  - Label-based termination (`goto`) for controlled exit



> **Note:** `goto` is used intentionally for educational purposes to demonstrate label-based flow control. In production systems, loop-based constructs are preferred.



---



## Default Configuration



| Parameter        | Value   |

|------------------|---------|

| Initial Balance  | ₹20,000 |

| ATM PIN          | 5845    |



---



## How to Build and Run

Sample Menu

1. Check Balance

2. Deposit Amount

3. Withdraw Amount

4. Exit

Limitations

Single transaction per execution

No retry limit for incorrect PIN

No persistent data storage

No loop-based session handling

Future Enhancements

Continuous session using loops

PIN retry limits and lockout mechanism

Modular design using functions

File-based balance persistence

Improved input validation

Purpose

This project is intended for:

Practicing decision conditions and control flow in C

Academic assignments and lab exercises

Understanding real-world logic mapping in procedural programming

