#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main(int argc, char **argv)
{
	int b, c, d, e;
	char a[15], ch;
	FILE *fp1, *fp2, *fp3;
	if(argc!=4)
	{
		printf("USAGE: ./aout sfname1 sfnmae2 dfname \n");
		return;
	}
	fp1=fopen(argv[1],"r");
	fp2=fopen(argv[2],"r");
	fp3=fopen(argv[3],"w+");
	if(fp1==0 || fp2==0 || fp3==0)
	{
		printf(" FIle not found. (fp1=%p, fp2=%p, fp3=%p) \n", fp1, fp2, fp3);
		return;
	}
	b=0;
	while((fscanf(fp1,"%s",a))!=-1)
	b++;
	c=0;
	while((fscanf(fp2,"%s",a))!=-1)
	c++;
	if(c>b)
	c=c+b-(b=c);
	printf("b=%d c=%d \n", b, c);
	rewind(fp1);
	rewind(fp2);
	for(d=0;d<=b;d++)
	{
		if((fscanf(fp1,"%s",a))!=-1)
		{
			fprintf(fp3,"%s",a);
			ch=fgetc(fp1);
			if(ch=='\n' || ch==' ')
			{
				fputc(ch,fp3);
			}
		}
		if((fscanf(fp2,"%s",a))!=-1)
		{
			fprintf(fp3,"%s",a);
			ch=fgetc(fp2);
			if(ch=='\n' || ch==' ')
			{
				fputc(ch,fp3);
			}
		}
	}
}
