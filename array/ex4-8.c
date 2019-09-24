#include<stdio.h>
main()
{
	char a[10], b, c, d, e, ele;
	printf("Enter elements of arrray: \n");
        ele=sizeof(a)/sizeof(a[0]);
	for(b=0;b<10;b++)
	{
		scanf(" %c",&a[b]);
//		printf("hello\n");
	}
	for(b=0,c=0;b<ele-1;b++)
	{
		for(d=b+1;d<=ele-1;d++)
		{
			if(a[b]==a[d])
			{
				for(e=d;e<=ele-1;e++)
				{
					a[e]=a[e+1];
				}
				d--;
				ele--;
//		                printf("he\n");
			}
		}
	}
	for(b=0;b<=ele-1;b++)
	{
		printf("%c ", a[b]);
	}
	printf("\n");
}
