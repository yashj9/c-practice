#include<stdio.h>
main()
{
	int a[10], b=0, c, d=1;
	printf("Enter 10 numbers: \n");
	for(c=0;c<10;c++)
		scanf("%d", &a[c]);
	for(c=0;c<10;c++)
		if(a[c]%2==0)
			b=b+a[c];
		else
			d=d*a[c];
	printf("%d and %d \n", b, d);
}
		
