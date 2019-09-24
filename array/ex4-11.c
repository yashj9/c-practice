#include<stdio.h>
main()
{
	int a[10], b[10]={0}, c[10]={0}, d, e, f, g, h=0, x=0, y=0, ele, ele1, ele2;
	ele=sizeof(a)/sizeof(a[0]);
	ele1=sizeof(b)/sizeof(b[0]);
	ele2=sizeof(c)/sizeof(c[0]);
	printf("Enter 10 integers: \n");
	for(d=0;d<ele;d++)
		scanf("%d", &a[d]);
	for(d=0;d<ele;d++)
	{
		for(f=0,g=0;f<ele1;f++)
		{
			if(a[d]==b[f])
			{
				g=1;
				break;
			}
		}
		if(g==0)
		{
			for(e=d+1;e<ele;e++)
			{
				if(d==e)
					continue;
				if(a[d]==a[e])
				{
					b[x]=a[d];
					x++;
					break;
				}
			}
		}
	}
	for(d=0;d<ele;d++)
	{
		for(f=0,y=0;f<ele1;f++)
		{
			if(a[d]==b[f])
			{
				y=1;
				break;
			}
		}
		if(y==0)
		{
			c[h]=a[d];
			h++;
		}
	} 
	printf("DUplicates array: \n");
	for(f=0;f<ele1 && b[f]!=0;f++)
		printf("%d ", b[f]);
	printf("\n");
	printf("Non duplicates array : \n");
	for(h=0;h<ele2 && c[h]!=0;h++)
		printf("%d ", c[h]);
	printf("\n");
} 
