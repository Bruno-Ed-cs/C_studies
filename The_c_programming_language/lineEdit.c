#include <stdio.h>
#include <string.h>

#define BUFFERSIZE 9000

void print80(char string[], int size);

void format(char string[], int size);

void reverse(char string[], int size);


int main(int argc, char *argv[]){

    char text[BUFFERSIZE];
    int c;

/**    printf("%s", argv[1]); **/

    for(int i = 0; (c = getchar()) != EOF; i++){

        text[i] = c;
    }

    if (*argv[1] == 'p') {
        print80(text, BUFFERSIZE);
    } else if (*argv[1]== 'f') {
        format(text, BUFFERSIZE);
    } else if (*argv[1] == 'r') {
        reverse(text, BUFFERSIZE);
    } else {
        printf("Invalid argument");
        return 1;
    }    

    return 0;
}


void print80(char string[], int size) {
    int curChar = 0, line[2], max;
    char line80[size], longest[size * 2];
    line80[0] = '\0';  // Initialize line80 as an empty string
    longest[0] = '\0';
    line[0] = 0;
    max = 80;

    for (int i = curChar; i < size && string[i] != '\0'; i++) {
        if (string[i] == '\n') {
            line[1] = i + 1;
            if ((line[1] - line[0]) >= max) {
                int p = line[0];

                // Reset line80 to an empty string for each new line
                line80[0] = '\0';

                for (int j = 0; j <= (line[1] - line[0]) && p <= line[1]; j++) {
                    line80[j] = string[p];
                    p++;
                }

                line80[(line[1] - line[0])] = '\0';
                strcat(longest, line80);
            }

            line[0] = line[1];
        }
    }

    if (strlen(longest) >= 10) {
        printf("\nLongest lines with 80 or more characters:\n%s\n", longest);
    } else {
        printf("\nThere is no line bigger than 80 characters.\n");
    }
}

void format(char string[], int size){

    char result[size];
    int i, j;
    j = 0;

    for (i = 0; string[i] != '\0'; i++){

        if (string[i] == ' ' && string[i - 1] == ' '){
            continue;
        } else if (string[i] == '\t') {
            result[j] = ' ';
            j++;
        } else if (string[i] == '\n' && string[i -1] == '\n') {
            continue;
        } else {
            result[j] = string[i];
            j++;
        }
    }
    result[j] = '\0';

    if ((strcmp(result, string) != 0)){
        format(result, BUFFERSIZE);
    }

    if (strcmp(result, string) == 0) {
        printf("\nFormatted string: \n%s\n", string);
        return;
    }
}


void reverse(char string[], int size) {
    char result[size];
    int i, p, lstart, lend, j;
    j = 0;

    lstart = 0;

    for (i = 0; string[i] != '\0'; i++) {
        if (string[i] == '\n' || string[i + 1] == '\0') {
            lend = (string[i] == '\n') ? i -1 : i; // Adjusting the end position for newline

            for (p = lend; p >= lstart; p--) {
                result[j] = string[p];
                j++;
            }

            result[j] = '\n';
            j++;

            lstart = i + 1;
        }
    }

    // Null-terminate result
    result[j] = '\0';

    printf("\nReversed string: \n%s\n", result);
}

