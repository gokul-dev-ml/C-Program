## 📌 Overview

This C program demonstrates **recursive function execution** by clearly showing the **winding (function calls)** and **unwinding (return phase)** of recursion using printed trace messages.

The program includes two classic recursive problems:

1. **Sum of digits of a number**
2. **Factorial of a number**

---

## 🎯 Objectives

* Understand how recursion works internally
* Visualize **call stack behavior**
* Learn the importance of **base cases**
* Observe how values are computed during **unwinding**

---

## 🧠 Concepts Covered

* Recursive functions in C
* Base condition vs recursive call
* Modulus (`%`) and division (`/`) for digit extraction
* Stack unwinding in recursion

---

## 📂 Program Details

### 1️⃣ Sum of Digits (Recursive)

**Logic:**

```
sumDigits(n) = (n % 10) + sumDigits(n / 10)
Base case: sumDigits(0) = 0
```

**What is shown:**

* Each recursive call (WINDING)
* Each return step (UNWINDING)

---

### 2️⃣ Factorial (Recursive)

**Logic:**

```
factorial(n) = n × factorial(n − 1)
Base case: factorial(0) = 1
```

**What is shown:**

* Recursive depth
* Multiplication during unwinding

---

## ▶️ Sample Output (Excerpt)

```
=== sumDigits(1234) ===
WINDING: sumDigits(1234) - digit = 4
WINDING: sumDigits(123) - digit = 3
WINDING: sumDigits(12) - digit = 2
WINDING: sumDigits(1) - digit = 1
BASE CASE: sumDigits(0) = 0
UNWINDING: sumDigits(1) - 1 + 0 = 1
UNWINDING: sumDigits(12) - 2 + 1 = 3
UNWINDING: sumDigits(123) - 3 + 3 = 6
UNWINDING: sumDigits(1234) - 4 + 6 = 10
Result: 10
```

---





## ⚠️ Important Notes

* Recursive functions **must have a base case**
* Each recursive call must move toward the base case
* Excessive recursion depth can cause stack overflow
* Factorial values overflow `int` beyond 12!

---

## 📌 One-Line Explanation (Exam / Viva)

> This program demonstrates recursion by tracing the winding and unwinding phases using sum of digits and factorial examples.

---
