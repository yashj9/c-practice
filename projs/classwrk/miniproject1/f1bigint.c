#include"header.h"
//extern int n;
int bigint(int *p,int x)
{
	static int *z3=0;
	if(x==0 && z3!=0)
	{
//		free(z3);
		z3=0;
		return 1;
	}
	else if(x==0)
	{
		z3=0;
		return 1;
	}
	z3=bblsort(p,1);
	return z3[n-x];
}
