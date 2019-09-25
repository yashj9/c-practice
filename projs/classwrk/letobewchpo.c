#include<stdio.h>
main()
{
	int a, b, pos, i;
	char *p;
	printf("Enter an integer: \n");
	scanf("%d", &a);
	p=(char *)&a;
	printf("Before: -------------------------------------\n");
	for(pos=31;pos>=0;pos--)
	{
		if((pos+1)%8==0)
			printf("| | ");
		printf("%d ", a>>pos&1);
	}
	printf("\n");
	printf("After: -------------------------------------\n");
	for(i=0;i<4;i++)
	{
		printf("| | ");
		for(pos=7;pos>=0;pos--)
		printf("%d ", *p>>pos&1);
		p=p+1;
	}
	printf("\n");
}
