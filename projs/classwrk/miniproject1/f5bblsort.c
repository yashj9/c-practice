#include"header.h"
//extern int n, *z1;
int * bblsort(int *p,int x)
{
	int a, b, t;
	static int c=0;
	if(x==0 && z1!=0)
	{
		free(z1);
		z1=0;
		c=0;
		return 0;
	}
	else if(x==0)
	{
		z1=0;
		c=0;
		return 0;
	}
//	if(c==0)
//	{
	if(z1!=0)
	{
		free(z1);
		z1=0;
	}
	z1=malloc(sizeof(int)*n);
	for(a=0;a<n;a++)
		z1[a]=p[a];
//	c=1;
//	}
	if(x==1)
	{
		for(a=0;a<n-1;a++)
		{
			for(b=a+1;b<n;b++)
			{
				if(z1[a]>z1[b])
				{
					t=z1[a];
					z1[a]=z1[b];
					z1[b]=t;
				}
			}
		}
	}
	if(x==2)
	{
		for(a=0;a<n-1;a++)
		{
			for(b=a+1;b<n;b++)
			{
				if(z1[a]<z1[b])
				{
					t=z1[a];
					z1[a]=z1[b];
					z1[b]=t;
				}
			}
		}
	}
	return z1;
}
