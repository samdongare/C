#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp;
	int ch;
	
	if((fp=fopen("myfile.txt","w"))==NULL)
	{
		printf("Error in opening file\n");
		exit(1);
	}
	printf("Enter text :\n");
	//press  ctrl+z/ctrl+d to stop reading characters
	while((ch=getchar())!=EOF)
		fputc(ch,fp);
	
	fclose(fp);
	return 0;
}
