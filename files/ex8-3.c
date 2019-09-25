#include<stdio.h>
#include<stdlib.h>
main()
{
	int a, b, c;
	char ch[20], fc[40];
	FILE *fp1, *fp2;
	printf("Enter the line number to be replaced: \n");
	scanf(" %d", &a);
	printf("Enter the data/string to be replaced with: \n");
	scanf(" %[^\n]", ch);
	fp1=fopen("data1","r+");
	fp2=fopen("temp","w+");
	b=0;
	while(fgets(fc,50,fp1))
	{
		b++;
		if(b==a)
		{
//			fc=ch;
			fprintf(fp2,"%s", ch);
			fputc('\n',fp2);	
			continue;
		}
		fprintf(fp2,"%s", fc);
	}
	remove("data1");	
	rename("temp","data1");
}
