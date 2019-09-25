#include"header.h"

main(int argc,char **argv)
{
	int i=0, j=0, k=0, l=0, len=0, s1=0, s2=0, s3=0, q=0, r=0;
	char ch, *ar;
	FILE *fp;
	if(argc!=2)
	{
		printf("Usage: ./a.out fname \n");
		return;
	}
	fp=fopen(argv[1],"r+");
	while(argv[1][q])
	{
		q++;
	}
	printf(" %d \n", q);
	ar=malloc(sizeof(char)*(q+1));
	q=0;
	while(argv[1][q])
	{
		ar[q]=argv[1][q++];
	}
	ar[q]=argv[1][q];
	for(r=0;r<q;r++)
	{
		if(ar[r]=='.')
		{
			ar[r+1]='i';
		}
	}
	printf(" %s \n", ar);
	if(fp==0)
	{
		printf("The file named \' %s \' not found in the current working directory. \n", argv[1]);
		return;
	}
	while((ch=fgetc(fp))!=-1)
	{
		a++;
		b++;
		if(ch==' ')
		{
			c++;
			e++;
			if(b>d)
				d=b;
			b=0;
		}
		if(ch=='\n')
		{
			c++;
			f++;
			if(a>g)
				g=a;
			if(b>d)
				d=b;
			a=0;
			b=0;
		}	
	}
	printf("The biggest word length: %d and biggest line length: %d and total number of lines: %d \n", d, g, f);
	rewind(fp);
	fp=cmtrmvl(fp);
	rewind(fp);
	fp=hfincl(fp);
	rewind(fp);
	fp=mcrexp(fp);
	rewind(fp);
	remove("temp");
	remove("op");
	remove("op2");
	rename("op3",ar);
}
