#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main(int argc,char **argv)
{
	int b, c;
	char a[10], ch;
	FILE *fp;
	if(argc!=2)
	{
		printf("Usage: ./a.out fname. \n");
		return;
	}
	fp=fopen(argv[1],"r+");
	while(fscanf(fp,"%s",a)!=-1)
	{
		if(a[0]>='a' && a[0]<='z')
		{
			a[0]=a[0]-32;
		}
		else 
			continue;
		if(ch=fgetc(fp)=='\n')
		b=1;
		else
		b=0;
		fseek(fp,-strlen(a)-1,SEEK_CUR);
		fprintf(fp,"%s",a);
		if(b==1)
		fputc('\n',fp);
	}
}
