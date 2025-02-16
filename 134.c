//C Program to Read/Write Structure to a File

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    char name[50];
    float marks;
} Student;

void writeToFile(Student s[], int n, char *filename) {
    FILE *file = fopen(filename, "wb");
    if (!file) {
        printf("Error opening file.\n");
        return;
    }
    fwrite(s, sizeof(Student), n, file);
    fclose(file);
}

void readFromFile(char *filename) {
    FILE *file = fopen(filename, "rb");
    if (!file) {
        printf("Error opening file.\n");
        return;
    }
    Student s;
    while (fread(&s, sizeof(Student), 1, file))
        printf("ID: %d, Name: %s, Marks: %.2f\n", s.id, s.name, s.marks);
    fclose(file);
}

int main() {
    int n;
    char filename[] = "students.dat";

    printf("Enter number of students: ");
    scanf("%d", &n);

    Student students[n];
    for (int i = 0; i < n; i++) {
        printf("Enter ID, Name, and Marks for student %d: ", i + 1);
        scanf("%d %s %f", &students[i].id, students[i].name, &students[i].marks);
    }

    writeToFile(students, n, filename);
    printf("\nReading from file:\n");
    readFromFile(filename);

    return 0;
}
