#include <stdio.h>
#include <stdlib.h>

const char *pid = NULL;

int main(int argc, char **argv)

{
	char ch;
	int i = 0;
	char file_name[100];
	char text[150];
	FILE *fp;
	char *p;

	pid = argv[1];
	sprintf(file_name, "/proc/%s/stat", pid);
	// printf(file_name);
	fp = fopen(file_name, "r");
	while ((ch = fgetc(fp)) != EOF)
	{
		// printf("%c\n", ch);
		text[i] = ch;
		i++;
	}

	// p = strtok(text, " ");
	// if (p)
	// {
		
	// }
	// puts(text);
	fclose(fp);
	return 0;
}
