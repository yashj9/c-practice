#include<stdio.h>
main()
{
	char a[8]={'B','C','D','E','F'}, b;
	int c, d;
	for(d=0;d<8;d++)
		printf("%c ", a[d]);
	printf("\n");
	printf("Enter a character to be inserted : \n");
	scanf(" %c", &b);
	printf("Select the place for the character: \n");
	scanf("%d", &c);
	for(d=7;d>=c-1;d--)
		a[d+1]=a[d];
	a[c-1]=b;
	for(d=0;d<8;d++)
		printf("%c ", a[d]);
	printf("\n");
}
