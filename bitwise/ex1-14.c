#include<stdio.h>
void binary(int x);

void binary(int x)
{
	short bi, lo;
	for(lo=31;lo>=0;lo--)
	{
		printf(" %d ", bi=(x>>lo)&1);
	}
	printf("\n");
}

int main()
{
	int a, b;
	short l, p=31;
	printf("Enter the value of integer: \n");
	scanf("%d", &a);
	b=a;
	binary(a);
	for(l=4;l>0;l--)
	{
		if(((a>>p)&1)!=((a>>(p-28)&1)))
		{
			a=a^(1<<p);
			a=a^(1<<(p-28));
		}
		p--;
	}
	binary(a);
	return 0;
}
