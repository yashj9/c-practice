#include<stdio.h>
main()
{
	int a[10], b, c, d, ele;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter ten ele to array: \n");
	for(b=0;b<ele;b++)
		scanf("%d", &a[b]);
	if(a[0]>a[1])
	{
		c=a[0];
		d=a[1];
	}	
	else
	{
		c=a[1];
		d=a[0];
	}
	for(b=2;b<ele;b++)
	{
		if(a[b]>c)	
		{
			d=c;
			c=a[b];
		}
		else if(a[b]>d)
		{
			d=a[b];
		}
	}
	printf("The 2nd largest number is %d \n", d);
}
