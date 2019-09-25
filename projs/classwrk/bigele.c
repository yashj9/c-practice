#include<stdio.h>
main()
{
	int a[10], b, c=0, d, ele;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter ten ele to int array: \n");
	for(b=0;b<ele;b++)
		scanf("%d", &a[b]);
	for(b=0;b<ele;b++)
	{
		if(a[b]>c)
			c=a[b];
	}
	printf("The biggest ele is %d \n", c);
}
