#include<stdio.h>
main()
{
	unsigned int a, b=0;
	short s;
	printf("Enter a 4 digit hexadecimal number: ");
	scanf("%x", &a);
	for(s=0;s<=7;s++)
	{
		b=(a>>0)&1;
		a=a>>1;
		a=a|(b<<15);
	}
	printf("The number in hexadecimal now is: %x \n", a);
}	
		
