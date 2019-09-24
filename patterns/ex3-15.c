#include<stdio.h>
main()
{
	int a, b, c, d, e, f[6]={1,0,0,0,0,0};
	for(a=0;a<6;a++)
	{
		for(b=0,c=5-a;b<6-a;b++)
		{
			if(c>0)
			{
				printf(" ");
				c--;
			}
			else
			{
				for(d=0,e=a;e>=0;e--)
				{
					printf("%d ",f[e]);
					f[e+1]=f[e]+f[e+1];
				}
			}
		}
		printf("\n");
	}
}
