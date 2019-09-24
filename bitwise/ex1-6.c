#include<stdio.h>
int main()
{
	int a;
	printf("Enter the value of integer: ");
	scanf("%d", &a);
	if((a&(1<<0)) || (a&(1<<1)) || (a&(1<<2)))
	{
		printf("The Value %d is Not divisible by 8. \n", a);
	}
	else
	{
		printf("The value %d is divisible by 8 and its value is %d .\n", a, a/8);
	}
	return 0;
}
