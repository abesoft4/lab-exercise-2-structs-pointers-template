#include <assert.h>
#include <string.h>
#include <stdio.h>

typedef struct {
    int id;
    char name[50];
    float gpa;
} Student;

void initStudent(Student* s, int id, const char* name, float gpa) {
    s->id = id;
    strcpy(s->name, name);
    s->gpa = gpa;
}

void updateGPA(Student* s, float newGPA) {
    s->gpa = newGPA;
}

int main() {
    Student s1;
    initStudent(&s1, 101, "Alice", 3.75);

    assert(s1.id == 101);
    assert(strcmp(s1.name, "Alice") == 0);
    assert(s1.gpa == 3.75f);

    updateGPA(&s1, 4.0);
    assert(s1.gpa == 4.0f);

    printf("✅ Structures & Pointers recap tests passed!\n");
    return 0;
}
