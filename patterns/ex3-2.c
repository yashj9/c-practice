#include<stdio.h>
main()
{
	int a, b, c, d=0;
	for(a=1;a<8;a++)
	{
		for(b=a;b<7;b++)
		{
			printf(" ");
		}
		for(c=a+d;c>0;c--)
		{
			printf("*");
		}
		d++;
		printf("\n");
	}
	d-=3;
	for(a=7;a>0;a--)
	{
		for(b=a;b<8;b++)
		{
			printf(" ");
		}
		for(c=a+d;c>0;c--)
		{
			printf("*");
		}
		d--;
		printf("\n");
	}
}
