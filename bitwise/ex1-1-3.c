#include<stdio.h>
int main()
{
	int a, t;
	unsigned short int i;
	printf("Enter the value of integer : \n");
	scanf("%d",&a);
	printf("Enter the value of bit to be Toggled: \n");
	scanf("%hd",&i);
	if(i>31||i<0)
	{
		printf("Plz enter a valid bit value for integer.. (0...31). \n");
	}
	t=1<<i;
	a=a^t;
	printf("The value now is: %d \n", a);
	return 0;
}
