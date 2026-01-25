# Student Result Management System (C)

A console-based **Student Result Management System** implemented in **C**, demonstrating the use of **functions**, **parameter passing**, and **floating-point calculations** in a modular and structured manner.

---

## Overview

This program accepts marks for three subjects, computes the total marks, calculates the percentage, assigns a grade based on predefined criteria, and displays the results in a formatted output.

The project emphasizes **functional decomposition**, where each logical operation is handled by a dedicated function, improving code readability and maintainability.

---

## Key Features

- Input marks for three subjects
- Calculate total marks using a user-defined function
- Compute average marks using floating-point division
- Assign grades based on percentage
- Display results with formatted decimal precision
- Clean and modular procedural design

---

## Technical Details

- **Language:** C  
- **Programming Paradigm:** Procedural  
- **Core Concepts Used:**
  - Function declaration and definition
  - Function calls with parameters
  - Return values
  - Integer and floating-point arithmetic
  - Conditional statements (`if-else`)
  - Formatted output using `printf`

---

## Program Flow

1. User enters marks for three subjects
2. Total marks are calculated
3. Average (percentage) is computed
4. Grade is determined based on percentage
5. Final results are displayed to the user

---

## Grading Logic

| Percentage (Average) | Grade |
|----------------------|-------|
| ≥ 90                 | A     |
| ≥ 75                 | B     |
| ≥ 60                 | C     |
| < 60                 | F     |

---

## Sample Output

```

m1: 85
m2: 78
m3: 92
total mark: 255
percentage: 85.00%
grade: B

````

---



## Limitations

* Handles only one student per execution
* Assumes valid input values
* No data persistence or file handling

---

## Future Enhancements

* Add input validation for mark ranges
* Support multiple students using arrays
* Convert to menu-driven execution
* Modularize code into multiple source files

---


