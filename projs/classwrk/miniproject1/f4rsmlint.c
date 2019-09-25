#include"header.h"
/*extern int n, *z2;
extern struct intarr
{
	int *ip;
	int s;
}rsi; */
struct intarr rsmlint(int *p,int x)
{
	int a, b, c;
	if(p==0 && z2!=0)
	{
		free(z2);
		z2=0;
		rsi.ip=(int *)0;
		rsi.s=1;
		return rsi;
	}
	else if(p==0)
	{
		z2=0;
		rsi.ip=0;
		rsi.s=1;
		return rsi;
	}
	for(a=0,c=0;a<n;a++)
	{
		if(p[a]<x)
		{
			c=c+1;
		}
	}
	if(z2!=0)
	free(z2);
	z2=malloc(sizeof(int)*c);
	for(a=0,c=0;a<n;a++)
	{
		if(p[a]<x)
		{
			z2[c]=p[a];
			c++;
		}
	}
	rsi.ip=z2;
	rsi.s=c;
	return rsi;
}
