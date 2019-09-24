#include<stdio.h>
main()
{
	int a[7], b, c, d, e, f;
	printf("Enter 7 nubers: \n");
	for(b=0;b<7;b++)
		scanf("%d", &a[b]);
	if(a[0]>a[1])
	{
		c=e=a[0];
		d=f=a[1];
	}
	else
	{
		d=e=a[0];
		c=f=a[1];
	}
	for(b=2;b<7;b++)
	{
		if(c<a[b])
		{
			d=c;
			c=a[b];
		}
		else if(d<a[b])
			d=a[b];
		if(f>a[b])
		{
			e=f;
			f=a[b];
		}
		else if(e>a[b])
			e=a[b];
	}
	printf("%d and %d \n", d, f);
}
