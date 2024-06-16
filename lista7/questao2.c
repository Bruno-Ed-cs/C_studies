
#include <stdio.h>
#include <string.h>

int main()
{
    char classes[3][20];

    for (int i = 0; i < 3; i++) {
        fgets(classes[i], 20, stdin);
        // Remove the newline character if it's there
        size_t len = strlen(classes[i]);
        if (len > 0 && classes[i][len - 1] == '\n') {
            classes[i][len - 1] = '\0';
        }
    }

    if (strcmp(classes[0], "vertebrado") == 0)
    {
        if (strcmp(classes[1], "ave") == 0)
        {
            if (strcmp(classes[2], "carnivoro") == 0) {
                printf("aguia\n");
            } else if (strcmp(classes[2], "onivoro") == 0) {
                printf("pomba\n");
            }
        }
        else if (strcmp(classes[1], "mamifero") == 0)
        {
            if (strcmp(classes[2], "onivoro") == 0) {
                printf("homem\n");
            } else if (strcmp(classes[2], "herbivoro") == 0) {
                printf("vaca\n");
            }
        }
    }
    else if (strcmp(classes[0], "invertebrado") == 0)
    {
        if (strcmp(classes[1], "inseto") == 0)
        {
            if (strcmp(classes[2], "hematofago") == 0) {
                printf("pulga\n");
            } else if (strcmp(classes[2], "herbivoro") == 0) {
                printf("lagarta\n");
            }
        }
        else if (strcmp(classes[1], "anelideo") == 0)
        {
            if (strcmp(classes[2], "hematofago") == 0) {
                printf("sanguessuga\n");
            } else if (strcmp(classes[2], "onivoro") == 0) {
                printf("minhoca\n");
            }
        }
    }

    return 0;
}

