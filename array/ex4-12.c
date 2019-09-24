#include<stdio.h>
main()
{
	int  a[20]={0}, b, c, d, f, ele;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter a value (1-20): \n");
	scanf("%d", &b);
	for(c=0;c<b;c++)
	{
		a[c]=c+1;
		a[c]=a[c]*a[c];
	}
	for(c=0,d=0;c<b;c++)
	{
		d=d+a[c];
	}
	printf("s= %d \n", d);
}
