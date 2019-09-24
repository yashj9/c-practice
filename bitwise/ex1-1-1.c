#include<stdio.h>
int main()
{
	int a, s;
	unsigned short int i;
	printf("Enter the integer value: \n");
	scanf("%d",&a); 
	printf("Which number of bit is to be SET: \n");
	scanf("%hd", &i);
	if(i>31 || i<0)
	{
		printf("Enter a valid bit number for integer.. (0....31). \n");
	}
	s=1<<i;
	a=a|s;
	printf("The value is %d . \n", a);
	return 0;
} 
