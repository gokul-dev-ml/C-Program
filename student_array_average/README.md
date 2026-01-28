# Student Average Calculation Program (C)

## 📌 Overview

This C program stores **student names and marks**, then calculates and displays the **average marks for each student**.
It uses **2D arrays**, **nested loops**, and **basic arithmetic operations**, making it ideal for learning array handling in C.

---

## 🎯 Features

* Accepts names of **3 students**
* Accepts **3 subject marks per student**
* Displays:

  * Student name
  * Individual subject marks
  * Average marks (formatted to 2 decimal places)

---

## 🧠 Concepts Used

* two-dimensional arrays
* Nested `for` loops
* Input/output using `scanf()` and `printf()`
* Floating-point arithmetic
* Proper variable initialization

---

## 🧾 Program Logic (Brief)

1. Read student names and marks using nested loops
2. For each student:

   * Initialize `sum` to zero
   * Add all subject marks
   * Calculate average using `sum / 3`
3. Print results in a readable format

---

## 💻 Source Code

```c
#include<stdio.h>
int main()
{
    char student_name[3][50];
    int student_mark[3][3];
    int i,k;
    float sum;

    for(i=0;i<3;i++)
    {
        printf("Enter student name: ");
        scanf("%s", student_name[i]);

        for(k=0;k<3;k++)
        {
            printf("Enter student mark %d: ", k+1);
            scanf("%d", &student_mark[i][k]);
        }
    }

    for(i=0;i<3;i++)
    {
        sum = 0;
        printf("\nStudent: %s\n", student_name[i]);

        for(k=0;k<3;k++)
        {
            printf("Mark %d: %d\n", k+1, student_mark[i][k]);
            sum += student_mark[i][k];
        }

        printf("Average: %.2f\n", sum/3);
    }

    return 0;
}
```

---



## ⚠️ Notes

* Student names are read using `scanf("%s")`, so **names with spaces are not supported**
* Number of students and subjects are fixed (3 each)
* Suitable for **beginners and academic practice**

---

## 📈 Possible Enhancements

* Use `fgets()` to allow full names with spaces
* Use `struct` to represent a student
* Make number of students dynamic
* Add grade calculation (A/B/C/F)

---


