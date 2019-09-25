#include"header.h"
/*extern int n, *z2;
extern struct intarr
{
	int *ip;
	int s;
}rbi;	*/
struct intarr rbigint(int *p,int x)
{
	int a, b, c;
	static int d=0;
	if(p==0 && z2!=0)
	{
		free(z2);
		z2=0;
		rbi.ip=(int *)0;
		rbi.s=(int)1;
		return rbi;
	}
	else if(p==0)
	{
		z2=0;
		rbi.ip=0;
		rbi.s=1;
		return rbi;
	}
	for(a=0,c=0;a<n;a++)
	{
		if(p[a]>x)
		{
			c=c+1;
		}
	}
	if(z2!=0)
	free(z2);
	z2=malloc(sizeof(int)*c);
	for(a=0,c=0;a<n;a++)
	{
		if(p[a]>x)
		{
			z2[c]=p[a];
			c++;
		}
	}
	rbi.ip=z2;
	rbi.s=c;
	return rbi;
}
