#include<stdio.h>
main()
{
	int a[10], b[10]={0}, c, d, e, f, g, h, ele, ele1;
	ele=sizeof(a)/sizeof(a[0]);
	ele1=sizeof(b)/sizeof(b[0]);
	printf("Enter 10 integers: \n");
	for(c=0;c<ele;c++)
		scanf("%d", &a[c]);
	for(c=0;c<ele;c++)
	{
		for(d=0,e=0;d<ele;d++)
		{
			if(c==d)
				continue;
			if(a[c]==a[d])
			{
				e=1;
				break;
			}
		}
		if(e==0)
			printf("%d, ", a[c]);
	}
	printf("\n");
}
