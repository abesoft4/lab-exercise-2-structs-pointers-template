# Lab Exercise 2 – Structures & Pointers Recap in C

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

```

### Part B – Functions with Pointers
Implement:
```c
void initStudent(Student* s, int id, const char* name, float gpa);
void printStudent(const Student* s);
void updateGPA(Student* s, float newGPA);
```
## Part C – Array of Students
- In `main()`, create an array of 3 students.
- Initialize them with `initStudent()`.
- Print them with `printStudent()`.
- Update the GPA of one student and print again.
- Finally, use a **pointer** to traverse the array and print all students.
## `main.c` (starter code)

```c
#include <stdio.h>
#include <string.h>

// TODO: Define Student struct

// TODO: Implement initStudent()

// TODO: Implement printStudent()

// TODO: Implement updateGPA()

int main() {
    // TODO: Create array of 3 Students

    // TODO: Initialize them with initStudent()

    // TODO: Print them

    // TODO: Update GPA of one student and print again

    // TODO: Use pointer to traverse array and print all students

    return 0;
}
```
## Example Output
```c
ID: 101, Name: Jhon, GPA: 3.75
ID: 102, Name: Bob, GPA: 3.90
ID: 103, Name: Carol, GPA: 2.95
After update:
ID: 101, Name: Jhon, GPA: 3.75
ID: 102, Name: Bob, GPA: 4.00
ID: 103, Name: Carol, GPA: 2.95
Traversing with pointer:
ID: 101, Name: Jhon, GPA: 3.75
ID: 102, Name: Bob, GPA: 4.00
ID: 103, Name: Carol, GPA: 2.95
```
## Autograding
Your code will be automatically tested when you push


---

© 2025 Abebaw Degu, Ph.D.

