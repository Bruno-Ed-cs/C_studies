#include "stdio.h"
#include "math.h"

int hexToInt(char hex[]);

int main(int argc, char *argv[])
{

    int hi = hexToInt(argv[1]);
    printf("%d\n", hi);

    return 0;
};

int hexToInt(char hex[]){

    int dec, n, i = 0;

    for (i = 0; hex[i +1] != '\0'; ++i);

    for (int j = 0; j <= i; j++){

        if (hex[j] >= '0' && hex[j] <= '9'){

            n = hex[j] - '0';
        } else {

            switch (hex[j]) {

                case 'a':
                    n = 10;
                    break;

                case 'A':
                    n = 10;
                    break;

                case 'b':
                    n = 11;
                    break;

                case 'B':
                    n = 11;
                    break;

                case 'c':
                    n = 12;
                    break;
                case 'C':
                    n = 12;
                    break;

                case 'd':
                    n = 13;
                    break;

                case 'D':
                    n = 13;
                    break;

                case 'e':
                    n = 14;
                    break;

                case 'E':
                    n = 14;
                    break;

                case 'f':
                    n = 15;
                    break;

                case 'F':
                    n = 15;
                    break;

                default:
                    break;

            }
        }

        if (hex[j] == '0' && hex[j +1] == 'x' || hex[j] == '0' && hex[j +1] == 'X'){
        
            continue;
        } else {
        
            dec = 16 * dec + n;
        }

    }


    return dec;

    /** dec = (n * (16^d)) + dec **/
}
