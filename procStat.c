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
	pid = argv[1];
	sprintf(file_name, "/proc/%s/stat", pid);
	// printf(file_name);
	fp = fopen(file_name, "r");
	while ((ch = fgetc(fp)) != EOF)
	{
		text[i] = ch;
		i++;
	}
	fclose(fp);
	return 0;
}
