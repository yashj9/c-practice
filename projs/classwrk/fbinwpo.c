#include<stdio.h>
main()
{
	float f=23.5;
	int *p, pos;
	p=(int *)&f;
	for(pos=31;pos>=0;pos--)
		printf("%d ", *p>>pos&1);
	printf("\n");
}
