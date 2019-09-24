#include<stdio.h>
main()
{
	int a, b, c=5, d=0, e, f;
	for(a=1;a<=5;a++)
	{
		for(b=5+d,e=c-a,f=0;b>0;b--)
		{
			if(e>0)
			{
				printf(" ");
				e--;
			}
			else
			{
				printf("%d", f=f+1);
			}
		}
		d++;
		printf("\n");
	}
//	printf(" %d %d %d %d", a, b, c, d);
}
