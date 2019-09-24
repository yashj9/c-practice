#include<stdio.h>
main()
{
	int a, b, c, d;
	for(a=1;a<=5;a++)
	{
		for(b=a,c=5,d=a;b>0;b--,c--)
		{
			if(b==a)
			{
				printf("%d ", d);
			}
			else
			{
				printf("%d ", d=d+c);
			}
		}
		printf("\n");
	}
}
