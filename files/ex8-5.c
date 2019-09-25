#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main(int argc, char **argv)
{
	int b, c, d, e;
	char a[10], ch;
	FILE *fp1, *fp2, *fp3;
	if(argc!=4)
	{
		printf("Usage: .a/.out sfname1 sfname2 dfname \n");
		return;
	}
	fp1=fopen(argv[1],"r");
	fp2=fopen(argv[2],"r");
	fp3=fopen(argv[3],"w");
	if(fp1==0 || fp2==0 || fp3==0)
	{
		printf("File not found. (fp1=%p , fp2=%p , fp3=%p ) \n", fp1, fp2, fp3);
		return;
	}
	fseek(fp1,0,SEEK_END);
	fseek(fp2,0,SEEK_END);
	b=ftell(fp1);
	c=ftell(fp2);
	rewind(fp1);
	rewind(fp2);
	if(c>b)
	c=c+b-(b=c);
	printf(" b= %d c =%d\n", b, c);
	for(d=0;d<=b;d++)
	{
		if((ch=fgetc(fp1))!=-1)
			fputc(ch,fp3);
		if((ch=fgetc(fp2))!=-1)
			fputc(ch,fp3);
	}
}
