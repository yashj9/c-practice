#include<stdio.h>
main()
{
	float f=23.5;
	char *p;
	int pos, i;
	p=(char *)&f;
	p=p+3;
	for(i=0;i<4;i++)
	{
		for(pos=7;pos>=0;pos--)
		printf("%d ", *p>>pos&1);
		p=p-1;
	}
	printf("\n");
}
