#include<stdio.h>
#include<stdlib.h>

main(int argc,char **argv)
{
	int a, b, c;
	char ch, ar[50];
	FILE *fp, *dfp;
	if(argc!=3)
	{
		printf("USAGE: Use properly ok! :)");
		return;
	}
	fp=fopen(argv[1],"r+");
	dfp=fopen("temp","w+");
	a=0;
	fgets(ar,50,fp);
	do
	{
		a++;
		if(a==atoi(argv[2]))
			continue;
		fprintf(dfp,"%s", ar);
	}while(fgets(ar,50,fp));
	fclose(fp);
	rewind(dfp);
	fp=fopen(argv[1],"w+");
	while(fgets(ar,50,dfp))
	{
		fprintf(fp,"%s",ar);
	}
}
