//preprocessor replica attempt
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

main(int argc,char **argv)
{
	int a, b, c, d, e, f, g, h, i, j, k, l, s1, s2;
	char *ar, ch, *hn, ca, *li, hna[20];
	FILE *fp1, *fp2, *fp3, *fp4;
	if(argc!=2)
	{
		printf("USAGE: ./a.out fname.c \n");
		return;
	}
	fp1=fopen(argv[1],"r");
	fp2=fopen("op","w+");
	fp3=fopen("temp","w+");
	if(fp1==0)
	{
		printf("File not found. \n");
		return;
	}
	a=strlen(argv[1]);
	ar=malloc(sizeof(char)*(a+1));
	for(i=0;i<a+1;i++)
	{
		ar[i]=argv[1][i];
	}
	ar[i]='\0';
	ar[i-1]='i';
//	hn=malloc(1);
	fseek(fp1,0,SEEK_END);
	s2=ftell(fp1);
	rewind(fp1);
	a=b=c=d=e=f=0;
	while((ch=fgetc(fp1))!=-1)
	{
		a++;
		if(ch=='\n')
		{
			if(a>c)
				c=a;
			b++;
			a=0;
		}
	}
	li=malloc(sizeof(char)*(c));
	rewind(fp1);
	while((ch=fgetc(fp1))!=-1)
	{
		if(ch=='/')
		{
			if((ch=fgetc(fp1))=='/')
			{
				while((ch=fgetc(fp1))!='\n');
				if(ch=='\n')
				fputc(ch,fp3);
				continue;
			}
			if((ch=fgetc(fp1))=='*')
			{
				while((ch=fgetc(fp1))!=-1 && ch!='*');
						if((ch=fgetc(fp1))=='/')
				continue;
			}
		}
		fputc(ch,fp3);
	}
	fclose(fp3);
	rewind(fp1);
	fp3=fopen("temp","r");							
	while((ch=fgetc(fp3))!=-1)
	{
		if(ch=='<')
		{
			s1=0;
			while((ch=fgetc(fp3))!='>')
				s1++;
			fseek(fp3,-(s1+1),SEEK_CUR);
//			hn=realloc(hn,sizeof(char)*(s1+1));
			j=0;
			while((ch=fgetc(fp3))!='>')
			{	
				hna[j]=ch;
				j++;
			}
			hna[j]='\0';
		}
		else
		{
			fputc(ch,fp2);
			continue;
		}
		fp4=fopen(hna,"r");
		if(fp4==0)
		{
			printf("the file : %s , not found. \n", hna);
			continue;
		}
		else
		{
			while((ca=fgetc(fp4))!=-1)
			{
				fputc(ca,fp2);
			}
			fputc('\n',fp2);
		}
	}
	rewind(fp1);
	
}
	
