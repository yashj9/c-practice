#include<stdio.h>
main()
{
	int a, b, c, d;
	for(a=1;a<=6;a++)
	{
		for(b=a,c=1;c<=b;c++)
		{
			if(c%2==1)
			{
				printf("1 ");
			}
			else
			{
				printf("0 ");
			}
		}
		printf("\n");
	}
}
