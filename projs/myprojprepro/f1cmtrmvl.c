#include"header.h"

FILE * cmtrmvl(FILE *fp)
{
	int a, b, c, d;
	char ch;
	FILE *fp1;
	fp1=fopen("temp","w+");
	while((ch=fgetc(fp))!=-1)
	{
		if(ch=='/')
		{
			ch=fgetc(fp);
			if(ch=='/')
			{
				while((ch=fgetc(fp))!='\n' || ch==-1);
	//			if(ch=='\n')
	//			fputc(ch,fp1);
				continue;
			}
			else if(ch=='*')
			{
				while((ch=fgetc(fp))!='*' || ch==-1)
				{
					if(ch=='*')
					if((ch=fgetc(fp))=='/')
					break;
				}
				continue;
			}
				
				
		}
		fputc(ch,fp1);
	}
	return fp1;
}
