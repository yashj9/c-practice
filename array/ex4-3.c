#include<stdio.h>
main()
{
	int a[10], b, c, d=0, e[10]={0};
	printf("Enter 10 numbers: \n");
	for(b=0;b<10;b++)
		scanf("%d", &a[b]);
	for(b=0;b<10;b++)
	{
		for(c=2;c<a[b];c++)
			if(a[b]%c==0)
				break;
		if(a[b]==c)
		{
			e[d]=a[b];
			d++;	
		}
	}
	printf("number of prime numbers are %d \n", d--);
	for(;d>=0;d--)
		printf("%d \n", e[d]);
}
