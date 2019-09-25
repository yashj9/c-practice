#include"header.h"
int smlint(int *p,int x)
{
	static int *z4=0;
	if(x==0 && z4!=0)
	{
//		free(z4);
		z4=0;
		return 1;
	}
	else if(x==0)
	{
		z4=0;
		return 1;
	}
	z4=bblsort(p,1);
	return z4[x-1];
}
