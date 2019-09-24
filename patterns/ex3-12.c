#include<stdio.h>
main()
{
	int a, b, c, d, e, f;
	for(a=1;a<=5;a++)
	{
		for(b=1,e=1;b<=10;b++)
		{
			if(b<=a)
			{
				printf("%d", e++);
				if(b==a)
				e--;
			}
			else if(b>a && b<=(10-a))
			{
				printf(" ");
			}
			else
			{
				printf("%d", e--);
			}
		}
		printf("\n");
	}
}
