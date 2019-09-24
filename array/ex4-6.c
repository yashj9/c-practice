#include<stdio.h>
main()
{
	int a[8], b, c, d;
	printf("Enter 8 elements: \n");
	for(b=0;b<8;b++)
		scanf("%d", &a[b]);
	printf("Enter the position to delete its element: \n");
	scanf("%d", &c);
	for(d=c-1;d<8;d++)
		a[d]=a[d+1];
	a[d-1]=0;
	for(d=0;d<8;d++)
		printf("%d ", a[d]);
	printf("\n");
}
