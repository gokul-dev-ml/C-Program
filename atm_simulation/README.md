# ATM Simulation System (C)
A console-based ATM simulation program written in **C**, implementing secure banking operations using structured decision-making and controlled user input.

## Overview

This project simulates essential ATM functionalities such as balance inquiry, deposit, and withdrawal. Each sensitive operation is protected by **PIN verification with a limited number of attempts**, ensuring basic security logic.

The program is designed as a **menu-driven application** using `switch-case` and conditional control flow.

## Features



- Balance inquiry with PIN authentication

- Secure cash deposit with PIN validation

- Secure cash withdrawal with balance verification

- Limited PIN attempts (maximum 3 tries per operation)

- Clear transaction status messages

- Controlled program termination



---



## Technical Details



- **Language:** C

- **Programming Paradigm:** Procedural

- **Input/Output:** `scanf`, `printf`

- **Control Flow:**

  - `switch-case`

  - `if-else`

  - `while` loops

  - Label-based exit using `goto`



> **Note:** The use of `goto` is intentional for educational purposes to demonstrate explicit control transfer. In production systems, loop-based exits are generally preferred.



## Default Configuration



| Parameter        | Value   |

|------------------|---------|

| Initial Balance  | ₹20,000 |

| ATM PIN          | 5845    |

| Max PIN Attempts | 3       |



---



## Program Flow



1. User selects an operation from the menu

2. PIN verification is required for sensitive actions

3. User is allowed up to three attempts to enter the correct PIN

4. Transaction is processed upon successful authentication

5. Program exits gracefully with a confirmation message



---



## Menu Options



Check Balance

Deposit Amount

Withdraw Amount

Exit



---



## Build and Run Instructions

**Limitations**

Single operation per execution

No persistent data storage

No transaction history

No continuous session loop

**Potential Enhancements**

Continuous menu loop for multiple transactions

Modularization using functions

Removal of goto in favor of structured exits

PIN lockout and cooldown mechanism

File-based balance persistence

Intended Use

This project is suitable for:

Academic assignments and laboratory exercises

Practicing control structures in C

Understanding real-world procedural logic implementation

