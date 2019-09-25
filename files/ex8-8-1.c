#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main(int argc, char **argv)
{
	int b, c, d, e, f, g, h, i;
	char *a, ch, *l;
	FILE *fp1, *fp2, *fp3;
	if(argc!=3)
	{
		printf("USAGE: ./a.out fname word \n");
		return;
	}
	fp1=fopen(argv[1],"r+");
	if(fp1==0)
	{
		printf("file not found. (fp1=%p)\n", fp1);
		return;
	}
	b=0,c=0,d=0,e=0,f=0;
	while((ch=fgetc(fp1))!=-1)
	{
		b++;
		d++;
		if(ch==' ' || ch=='\n')
		{
			if(b>c)
				c=b;
			b=0;
		}
		if(ch=='\n')
		{
			if(d>f)
				f=d;
			d=0;
		}
	}
	printf("bigest word length (c) =%d , largest line length (f) =%d \n", c, f);
	rewind(fp1);
	g=strlen(argv[2]);
//	if(c>g)
//		g=c+g-(g=c);
	a=malloc(sizeof(char)*c);
	l=malloc(sizeof(char)*f);
	i=0;
	h=0;
	while(fgets(l,f+1,fp1))
	{
		h++;
		if(strstr(l,argv[2]))
		{
			
