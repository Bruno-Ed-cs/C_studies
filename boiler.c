#include<stdio.h>
#include<string.h>
#include<stdbool.h>

char cstring[] = "#include<stdio.h>\n#include<string.h>\n#include<stdbool.h>\n\nint main(){\n\n\treturn 0;\n}";
char filename[] = "template.c";
char path[] = "./";
char language[] = "c";

FILE *fileptr;

int main(){
	
	printf("%s\n", cstring);
	fileptr = fopen(filename, "w");
	fprintf(fileptr, "%s", cstring);
	fclose(fileptr);
	return 0;

	
}
