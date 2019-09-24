#include<stdio.h>
main()
{
	int a, b, d;
	for(a=0;a<7;a++)
	{
		for(b=-6;b<=6;b++)
		{
			d=b;
			if(d<0)
			{
				d=-d;
			}
			if(a<=d)
			{	
				printf("%c ", 'G'-d);
			}
			else
			{	
				printf("  ");
			}
		
		}
		printf("\n");
	}
}
