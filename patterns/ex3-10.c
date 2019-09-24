#include<stdio.h>
main()
{
	int a, b, c=5, d=0, e, f;
	for(a=1;a<=9;a++)
	{
		if(a<6)
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
		else
		{
			d--;
			for(b=4+d,e=c-(10-a),f=0;b>0;b--)
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
			printf("\n");
		}
	}
}
