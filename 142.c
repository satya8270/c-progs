//C Program to Read and Print all Files From a Zip File 

#include <stdio.h>
#include <zip.h>

int main() {
    char zipFilename[100];
    printf("Enter ZIP filename: ");
    scanf("%s", zipFilename);

    int err;
    zip_t *zip = zip_open(zipFilename, 0, &err);
    if (!zip) {
        printf("Error opening ZIP file.\n");
        return 1;
    }

    zip_int64_t num_files = zip_get_num_entries(zip, 0);
    for (zip_int64_t i = 0; i < num_files; i++) {
        const char *filename = zip_get_name(zip, i, 0);
        printf("File: %s\n", filename);

        zip_file_t *file = zip_fopen_index(zip, i, 0);
        if (!file) {
            printf("Error opening file inside ZIP.\n");
            continue;
        }

        char buffer[1024];
        zip_int64_t bytesRead;
        while ((bytesRead = zip_fread(file, buffer, sizeof(buffer))) > 0)
            fwrite(buffer, 1, bytesRead, stdout);

        printf("\n");
        zip_fclose(file);
    }

    zip_close(zip);
    return 0;
}
