#include<stdio.h>
int main()
{
	char c;
	printf("Enter a character: (a-z) (A-Z) \n");
	scanf(" %c", &c);
	printf("The entered char is %c and the toggled char is %c . \n", c, c^(1<<5));
	return 0;
}
	
