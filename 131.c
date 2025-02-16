//Read/Write Structure to a File in C 

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    char name[50];
    float marks;
} Student;

void writeToFile(Student s[], int n, char *filename) {
    FILE *file = fopen(filename, "wb");
    fwrite(s, sizeof(Student), n, file);
    fclose(file);
}

void readFromFile(char *filename) {
    FILE *file = fopen(filename, "rb");
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
    for (int i = 0; i < n; i++)
        scanf("%d %s %f", &students[i].id, students[i].name, &students[i].marks);

    writeToFile(students, n, filename);
    printf("\nStudent records written to file.\n\nReading from file:\n");
    readFromFile(filename);

    return 0;
}
