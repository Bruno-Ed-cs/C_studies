#include<stdio.h>
#include<string.h>
#include<stdbool.h>

// command model boiler  <language> <output name> <archive path>

char cstring[] = "#include<stdio.h>\n#include<string.h>\n#include<stdbool.h>\n\nint main(){\n\n\treturn 0;\n}";
char filename[] = "template.c";
char path[] = "./";
char language[] = "c";
char extensionC[] = ".c";

FILE *fileptr;

int main(int argc, char *argv[]){
	
	if (argv [1] == NULL || argv[2] == NULL){
		printf("Empty arguments\n");
		return 1;
	}

	if (argv[3] != NULL){
		for (int i = 0; i <= sizeof(argv[3])/sizeof(argv[3][0]); i++){
			path[i] = argv[3][i];

		}
	}

	int arraySize = sizeof(*argv) / sizeof(char);
	printf ("%s\n", path);
	for (int i = 0; i < argc; i++){

		printf("%d, %s\n", i, argv[i]);
	}

	if (argv[1] == NULL){
		printf("Missing argument");
		fclose(fileptr);
		return 1;

	} else if (strcmp(argv[1], "-c") == 0 || strcmp(argv[1], "-C") == 0){
		strcat(argv[2], extensionC); 
		fileptr = fopen(argv[2], "w");
		printf("ok");

	} else {
		printf("Format no foud");
		
		return 1;
	}
	
	fprintf(fileptr, "%s", cstring);
	fclose(fileptr);
	return 0;

	
}

