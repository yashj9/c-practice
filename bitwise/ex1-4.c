#include<stdio.h>
int main()
{
	long long int a, b;
	printf("Enter two values of integer: \n");
	scanf("%lld%lld", &a, &b);
	a^=b^=a^=b;
/*	a=a^b;
	b=a^b;
	a=a^b; */
	printf("The values are %lld and %lld . \n ", a , b);
	return 0;
}
