#include<stdio.h>
main()
{
	int a, b, c, d, e, f;
	for(a=1;a<=5;a++)
	{
		for(b=1,e=1;b<=9;b++)
		{
			if(b<=a)
			{
				printf("%d", e++);
		//		if(b==a)
		//		e--;
			}
			else if(b>a && b<=(9-a))
			{
				printf(" ");
		//		if(b==(9-a))
		//		e--;
			}
			else
			{
				if(b==6&&a==5)
				e--;
				printf("%d", --e);
			}
		}
		printf("\n");
	}
}
