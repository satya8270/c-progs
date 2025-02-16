//C Program to Create a Temporary File

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *tmpFile = tmpfile();
    if (tmpFile == NULL) {
        printf("Unable to create temporary file.\n");
        return 1;
    }

    fprintf(tmpFile, "This is a temporary file.\n");
    rewind(tmpFile);

    char buffer[100];
    fgets(buffer, sizeof(buffer), tmpFile);
    printf("Content: %s", buffer);

    fclose(tmpFile);
    return 0;
}
