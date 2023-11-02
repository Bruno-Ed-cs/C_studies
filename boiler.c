#include<stdio.h>
#include<string.h>
#include<stdbool.h>

char cstring[] = "#include<stdio.h>\n#include<string.h>\n#include<stdbool.h>\n\nint main(){\n\n\treturn 0;\n}";
char filename[] = "template.c";
char path[] = "./";
char language[] = "c";
char extension[] = ".c";

FILE *fileptr;
int main(int argc, char *argv[]){
	
	int arraySize = sizeof(*argv) / sizeof(char);
	printf ("%d\n", arraySize);
	for (int i = 0; i < argc; i++){

		printf("%d, %s\n", argc,argv[i]);
	}
	
	strcat(argv[1], extension); 
	fileptr = fopen(argv[1], "w");
	fprintf(fileptr, "%s", cstring);
	fclose(fileptr);
	return 0;

	
}

