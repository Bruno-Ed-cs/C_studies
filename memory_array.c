#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int x = 22;
int y = 16;
int z = 77;

char sexy_mon[] = "Machamp";

double my_age = 267.889;

bool is_gay = false;
bool is_straight = false;
bool is_bi = true;

void *memory_array[8] = {&x, &y, &z, sexy_mon, &my_age, &is_bi, &is_gay, &is_straight};

int array_size = sizeof(memory_array) / sizeof(memory_array[0]);

int main() {
    printf("%ln\n", sizeof(memory_array));
    printf("%ln\n", sizeof(memory_array[0]));
    printf("%ln\n", *((int *)memory_array[0]);

    for (int i = 0; i < array_size; i++) {
        void *element = memory_array[i];
        size_t variable_size = sizeof(*element);

        switch (variable_size) {
        case sizeof(int):
            printf("int: %d\n", *(int *)element);
            break;

        case sizeof(double):
            printf("double: %lf\n", *(double *)element);
            break;

        case sizeof(char):
            printf("char: %c\n", *(char *)element);
            break;

        default:
            printf("invalid type\n");
            break;
        }
    }

    return 0;
}
