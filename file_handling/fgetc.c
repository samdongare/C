#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp;
	int ch;
	if((fp=fopen("myfile.txt","r"))==NULL)
	{
		printf("Error in file opening\n");
		exit(1);
	}
	while((ch=fgetc(fp))!=EOF)
		printf("%c",ch);
	fclose(fp);
	return 0;
}
