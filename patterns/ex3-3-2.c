#include<stdio.h>
main()
{
	int a, b, c, d, e;
	char j, k;
	for(a=1;a<=13;a++)
	{
		if(a<=7)
		{
			c=a-1;
			j='\\';
			k='/';
		}
		else
		{
			c=15-a;
			j='/';
			k='\\';
		}
		for(b=1;b<=8;b++)
		{
		/*	if(b==1)
			{
				printf("\\");
			}
			if(b==8)
			{
				printf("/");
			} */
			if(c>0)
			{
				printf(" ");
				c--;
				if(c==1)
				printf("%c", j);
			}
			else
			{
				printf("* ");
				if(b==8)
				printf("%c", k);
			}
		}
		printf("\n");
	}
}
