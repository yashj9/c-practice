#include<stdio.h>
main()
{
	int a[10], b[5]={0}, c[10]={0}, d, e, f=1, g, h, i, ele, ele1, ele2, x=0, y=0;
	ele=sizeof(a)/sizeof(a[0]);
	ele1=sizeof(b)/sizeof(b[0]);
	ele2=sizeof(c)/sizeof(c[0]);
	printf("Enter the 10 integers: \n");
	for(d=0;d<ele;d++)
	{
		scanf("%d", &a[d]);
	}
	for(d=0,i=1;d<ele;d++)
	{
		for(h=0;h<x;h++)
		{
			if(a[d]==b[h])
			{
				i=0;
				break;
			}
			else
			{
				i=1;
			}
		}
		if(i==1)
		{
			for(e=d+1,f=1;e<ele;e++)
			{
				if(a[d]==a[e])
				{
					c[y]=++f;
					b[x]=a[d];
					g=1;
				}
				else if(g!=1)
				{
					g=0;
				}
			}
			if(g==1)
			{
				y++;
				x++;
				f=0;
			}
		}
	}
	for(d=0;d<x;d++)
	{
		printf(" %d -- %d times \n", b[d], c[d]);
	}
	printf("\n");
}
			
