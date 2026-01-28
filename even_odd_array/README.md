# Even and Odd Numbers Separation Using Arrays (C)

## 📌 Overview

This C program separates **even and odd numbers** from a given integer array and stores them into **two separate arrays**.
It demonstrates effective use of **arrays, conditional statements, and loops** in C programming.

---

## 🎯 Features

* Initializes an array with integers from **0 to 19**
* Separates numbers into:

  * Even numbers array
  * Odd numbers array
* Displays all even and odd numbers clearly

---

## 🧠 Concepts Used

* One-dimensional arrays
* Conditional statements (`if-else`)
* `for` loops
* Array indexing
* Basic input/output using `printf()`

---

## 🧾 Program Logic

1. Initialize an array with numbers from 0 to 19
2. Traverse the array and check each number:

   * If divisible by 2 → store in even array
   * Otherwise → store in odd array
3. Use separate counters to track positions in even and odd arrays
4. Print both arrays using loops

---

## 💻 Source Code

```c
#include <stdio.h>

int main()
{
    int a[20];
    int even[20], odd[20];
    int i, e = 0, o = 0;

    for (i = 0; i < 20; i++)
    {
        a[i] = i;
    }

    for (i = 0; i < 20; i++)
    {
        if (a[i] % 2 == 0)
        {
            even[e] = a[i];
            e++;
        }
        else
        {
            odd[o] = a[i];
            o++;
        }
    }

    printf("Even numbers:\n");
    for (i = 0; i < e; i++)
    {
        printf("%d ", even[i]);
    }

    printf("\nOdd numbers:\n");
    for (i = 0; i < o; i++)
    {
        printf("%d ", odd[i]);
    }

    return 0;
}
```



---

## 📤 Sample Output

```
Even numbers:
0 2 4 6 8 10 12 14 16 18

Odd numbers:
1 3 5 7 9 11 13 15 17 19
```

---

## ⚠️ Notes

* The array is **initialized programmatically**, not through user input
* The program uses **fixed-size arrays**
* Suitable for **beginners and academic practice**

---

## 📈 Possible Enhancements

* Accept user input instead of fixed values
* Use dynamic memory allocation
* Separate logic into functions
* Add count of even and odd numbers

---



