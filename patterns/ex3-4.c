#include<stdio.h>
main()
{
	int a, b=11, c=0, d=11;
	for(a=1;a<=11;a++)
	{
		for(b=d;b>0;b--)
		{
			if(c>0)
			{
				printf(" ");
				c--;
			}
			else
			{
				printf("*");
			}
		}
		if(a<6)
		{
			c=a;
			d--;
		}
		else
		{
			c=10-a;
			d++;
		}
		printf("\n");
	}
}
