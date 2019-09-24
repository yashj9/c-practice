#include<stdio.h>
main()
{
	int a[10], b, c, d;
	printf("Enter 10 numbers: \n");
	for(b=0;b<10;b++)
		scanf("%d", &a[b]);
	for(c=a[0],b=0,d=a[0];b<10;b++)
	{
		if(c<a[b])
			c=a[b];
		if(d>a[b])
			d=a[b];
	}
	printf("%d and %d \n", c, d);
}
