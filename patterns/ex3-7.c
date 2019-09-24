#include<stdio.h>
main()
{
	int a, b, c, d;
	for(a=1;a<=6;a++)
	{
		if(a%2==1)
		{
			for(b=a,c=1;b>0;b--,c+=2)
			{
				printf("%d ", c);
			}
			printf("\n");
		}
		else
		{
			for(b=a,c=2;b>0;b--,c+=2)
			{
				printf("%d ", c);
			}
			printf("\n");
		}
	}
}
