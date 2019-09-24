#include<stdio.h>
int main()
{
	int a;
	printf("Enter the value of integer: \n");
	scanf("%d",&a);
	if(a&(1<<31))
	{
		printf("The number is Negative. \n");
	}
	else
	{
		printf("The number is Positive. \n");
	}
	return 0;
}
