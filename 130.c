//C Program to Store Student Records as Structures and Sort them by Age or ID

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id, age;
    char name[50];
} Student;

int compareByID(const void *a, const void *b) {
    return ((Student *)a)->id - ((Student *)b)->id;
}

int compareByAge(const void *a, const void *b) {
    return ((Student *)a)->age - ((Student *)b)->age;
}

int main() {
    int n, choice;
    printf("Enter number of students: ");
    scanf("%d", &n);

    Student students[n];
    for (int i = 0; i < n; i++)
        scanf("%d %[^\n] %d", &students[i].id, students[i].name, &students[i].age);

    printf("Sort by (1: ID, 2: Age): ");
    scanf("%d", &choice);

    qsort(students, n, sizeof(Student), choice == 1 ? compareByID : compareByAge);

    for (int i = 0; i < n; i++)
        printf("ID: %d, Name: %s, Age: %d\n", students[i].id, students[i].name, students[i].age);

    return 0;
}
