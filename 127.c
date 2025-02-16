//C Program to Store Student Records as Structures and Sort them by Name

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100
#define NAME_LENGTH 50

typedef struct {
    char name[NAME_LENGTH];
    int roll;
    float marks;
} Student;

int compareByName(const void *a, const void *b) {
    return strcmp(((Student *)a)->name, ((Student *)b)->name);
}

int main() {
    Student students[MAX_STUDENTS];
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter name, roll number, and marks for student %d:\n", i + 1);
        scanf(" %49[^\n]", students[i].name);
        scanf("%d %f", &students[i].roll, &students[i].marks);
    }

    qsort(students, n, sizeof(Student), compareByName);

    printf("\nSorted Student Records:\n");
    for (int i = 0; i < n; i++) {
        printf("Name: %s, Roll: %d, Marks: %.2f\n", students[i].name, students[i].roll, students[i].marks);
    }

    return 0;
}
