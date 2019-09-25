#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main(int argc,char **argv)
{
	int b, c, d1, l1, l2, d2, e;
	char *a, ch;
	FILE *fp1, *fp2, *fp3;
	if(argc!=4)
	{
		printf("USAGE: ./a.out sfname1 sfname2 dfname \n");
		return;
	}
	fp1=fopen(argv[1],"r");
	fp2=fopen(argv[2],"r");
	fp3=fopen(argv[3],"w+");
	if(fp1==0 || fp2==0 | fp3==0)
	{
		printf("File not found. (fp1=%p, fp2=%p, fp3=%p ) \n", fp1, fp2, fp3);
		return;
	}
	b=0,c=0,l1=0,d1=0;
	while((ch=fgetc(fp1))!=-1)
	{
		c++;
		if(ch=='\n')
		{
			l1++;
			if(c>d1)
				d1=c;
			c=0;
		}
	}
	printf("l1=%d d1=%d \n", l1, d1);
	b=c=l2=d2=0;
	while((ch=fgetc(fp2))!=-1)
	{
		c++;
		if(ch=='\n')
		{
			l2++;
			if(c>d2)		
				d2=c;
			c=0;
		}
	}
	printf("l2=%d d2=%d \n", l2, d2);
	rewind(fp1);
	rewind(fp2);
	if(d2>d1)
	{
		a=malloc(sizeof(char)*d2);
		d2=d1+d2-(d2=d1);
	}
	else
		a=malloc(sizeof(char)*d1);
	if(l2>l1)
		l2=l1+l2-(l2=l1);
	for(e=0;e<=l1;e++)
	{
		if(fgets(a,d1+1,fp1))
			fprintf(fp3,"%s",a);
		if(fgets(a,d1+1,fp2))
			fprintf(fp3,"%s",a);
	}
}

