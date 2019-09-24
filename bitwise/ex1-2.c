#include<stdio.h>
int main()
{
	int a;
	printf("Enter an integer:");
	scanf("%d", &a);
	if(a & 1)
	{
		printf("The number %d is odd. \n", a);
	}
	else
	{
		printf("The number %d is even. \n", a);
	}
	return 0;
}
