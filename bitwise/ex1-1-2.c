#include<stdio.h>
int main()
{
	int a, u;
	unsigned short int i;
	printf("Enter the value : \n");
	scanf("%d", &a);
	printf("Enter the location of the bit to be cleared: \n");
	scanf("%hd",&i);
	if(i>31 || i<0)
	{
		printf("Plz set a valid bit value for integer. (0...31) .\n");
	}
	u=1<<i;
	a=a&(~u);
	printf("The value of a: %d \n", a);
}
