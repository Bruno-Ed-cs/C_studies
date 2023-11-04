#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Command model boiler  <language> <output name> <archive path>

char cstring[] = "#include<stdio.h>\n#include<string.h>\n#include<stdbool.h>\n\nint main(){\n\n\treturn 0;\n}";
char filename[] = "template.c";
char path[] = "./";
char language[] = "c";
char extensionC[] = ".c";

struct boilerplate {
    char language[10];
    char extension[10];
    char plate[500];
};

FILE *fileptr = NULL;

int main(int argc, char *argv[]) {
    if (argv [1] == NULL || argv[2] == NULL) {
        printf("Insufficient arguments\n");
        return 1;
    }

    struct boilerplate boiler;

    strcpy(boiler.language, argv[1]);
    strcpy(boiler.extension, ".c");
    strcpy(boiler.plate, cstring);

    if (argv[3] != NULL) {
        for (int i = 0; i < strlen(argv[3]); i++) {
            path[i] = argv[3][i];
        }
    }

    printf("Path: %s\n", path);
    for (int i = 0; i < argc; i++) {
        printf("%d, %s\n", i, argv[i]);
    }

    if (argv[1] == NULL) {
        printf("Missing argument\n");
        if (fileptr != NULL) {
            fclose(fileptr);
        }
        return 1;
    } else if (strcmp(argv[1], "-c") == 0 || strcmp(argv[1], "-C") == 0) {
        strcat(argv[2], boiler.extension);
        fileptr = fopen(argv[2], "w");

        if (fileptr == NULL) {
            printf("Error opening file\n");
            return 1;
        }

        printf("ok");
    } else {
        printf("Format not found\n");
        return 1;
    }

    fprintf(fileptr, "%s", boiler.plate);
    fclose(fileptr);
    return 0;
}

