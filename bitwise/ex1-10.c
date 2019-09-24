#include<stdio.h>
int main()
{
	int a, b;
	printf("Enter two numbers: \n");
	scanf("%d%d", &a, &b);
	(a^b)==0?(printf("The numbers are same.\n")):printf("The numbers are not same.\n");
	return 0;
}
