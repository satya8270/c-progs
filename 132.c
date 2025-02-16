//Flexible Array Members in a Structure in C

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    int size;
    char name[];
} Student;

int main() {
    int n;
    printf("Enter name size: ");
    scanf("%d", &n);

    Student *s = (Student *)malloc(sizeof(Student) + n * sizeof(char));

    s->id = 1;
    s->size = n;
    printf("Enter name: ");
    scanf("%s", s->name);

    printf("ID: %d, Name: %s\n", s->id, s->name);

    free(s);
    return 0;
}
