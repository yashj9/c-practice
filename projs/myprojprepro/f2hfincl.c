#include"header.h"

FILE * hfincl(FILE *fp)
{
	int h, i, j, k;
	char ch, chh,*ar, inc[10]="#include", dum[11];
	FILE *fp1, *fp2;
	fp1=fopen("op","w+");
	ar=malloc(sizeof(char)*d);
	i=0;
	j=0;
	k=0;
	while((chh=fgetc(fp))!=-1)
	{
		if(chh==inc[j])
		{
			dum[j]=chh;
			dum[j+1]='\0';
			j++;
			continue;
		}
		else
		{
			if(j==0)
				goto l1;
			if(j!=8)
			{
				fprintf(fp1,"%s",dum);
				fputc(chh,fp1);
			}
			j=0;
			if(chh=='<')
				goto l1;
			continue;
		}
l1:		if(chh=='<')
		{
			while((ch=fgetc(fp))!='\n')
			{
				if(ch==' ' || ch==-1 || ch=='>')
					break;
				ar[i]=ch;
				i++;
			}
			ar[i]='\0';
			fp2=fopen(ar,"r+");
			if(fp2==0)
			{
				printf("File \' %s \' not found. \n", ar);
				continue;
			}
			else
			{
				fputc('\n',fp1);
				while((ch=fgetc(fp2))!=-1)
				{
					fputc(ch,fp1);
				}
				fclose(fp2);
			}
			i=0;
			continue;
		}
		fputc(chh,fp1);
	}
	return fp1;
}
