#include<stdio.h>
main()
{
	int a, x, y, z, t1, t2;
	char b=' ';
	char s='*';
	for(x=7;x>1;x--)
	{
		for(a=x;a>0;a--)
		{
			printf(" ");
		}
		for(y=x;8-y;y++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for(x=2;x<7;x++)
	{
		for(a=x;a>-1;a--)
		{
			printf(" ");
		}
		for(y=x;7-y;y++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
