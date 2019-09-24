#include<stdio.h>
int main()
{
	unsigned int a, l;
	short s=15;
	printf("Enter a four digit hexadecimal value: ");
	scanf(" %x", &a);
	for(l=8;l>0;l--)
	{
		if((((a>>s)&1)!=((a>>(s-4))&1)))
		{
			a=a^(1<<s);
			a=a^(1<<(s-4));
		}
		if(s==12)
		{
			s=7;
		}
		--s;
	} 
	printf("The digits switched are like: 0x%x .\n", a);
	return 0;
}
	
