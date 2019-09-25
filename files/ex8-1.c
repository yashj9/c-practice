#include<stdio.h>
#include<stdlib.h>

main(int argc,char **argv)
{
	int a, b, c;
	char ch;
	FILE *fp;
	if(argc!=2)
	{
		printf("Usage: use properly! OK!. :) _^_\n");
		return;
	}
	fp=fopen(argv[1],"r+");
	while((ch=fgetc(fp))!=-1)
	{
		if(ch>='a' && ch<='z')
		{
			fseek(fp,-1,SEEK_CUR);
			fputc((ch-32),fp);
		}
		else if(ch>='A' && ch<='Z')
		{
			fseek(fp,-1,SEEK_CUR);
			fputc((ch+32),fp);
		}
	}
}
