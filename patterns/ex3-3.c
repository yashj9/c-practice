#include<stdio.h>
main()
{
	int a, b, c, d, e;
	for(a=1;a<=11;a++)
	{
		if(a<=6)
		{
			c=a-1;
		}
		else
		{
			c=11-a;
		}
		for(b=1;b<=6;b++)
		{
			if(c>0)
			{
				printf(" ");
				c--;
			}
			else
			{
				printf("* ");
			}
		}
		printf("\n");
	}
}
		
		
