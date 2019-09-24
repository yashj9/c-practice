#include<stdio.h>
main()
{
	int a[5], b, c, d, e;
	printf("Enter 5 numbers: \n");
	for(b=0;b<5;b++)
		scanf("%d", &a[b]);
	for(c=0,d=4;c<d;c++,d--)
	{
		e=a[c];
		a[c]=a[d];
		a[d]=e;
	}
	for(b=0;b<5;b++)
		printf("%d \n", *(a+b));
}
