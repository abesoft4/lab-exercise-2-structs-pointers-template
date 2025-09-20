# Lab Exercise – Structures & Pointers Recap in C

## Objectives
By completing this lab, you will:
- Review how to define and use **structures**.
- Practice **pointers to structures** (`->` operator).
- Pass structures **by reference** to functions.
- Work with **arrays of structures** and pointer traversal.

---

## Instructions

### Part A – Define Student Struct
Create a struct:
```c
typedef struct {
    int id;
    char name[50];
    float gpa;
} Student;
