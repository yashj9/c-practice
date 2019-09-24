#include<stdio.h>
int main()
{
	long long int a;
	short i, k=0, p=0;
	printf("Enter the value of integer: ");
	scanf("%lld", &a);
	for(i=0;i<=63;i++)
	{
		if(((long long)1<<i)&a)
		{
			k++;
			p=i;
		}
		if(k==2)
		break;
	}
	if(k==1)
	{
		printf("The number %lld is a %hd power of 2. \n", a, p);
	}
	else
	{
		printf("The number %lld is not a power of 2. \n",a);
	}
	return 0;
}
