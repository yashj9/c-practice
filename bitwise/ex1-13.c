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
	int a, b, t=0;
	short n, p, l;
	printf("Enter the number: \n");
	scanf("%d",&a);
	printf("Enter the number of bits to be removed: \n");
	scanf("%hd",&n);
	printf("Enter the starting position of the bits to be removed: \n");
	scanf("%hd",&p);
	b=a;
	binary(a);
	for(l=31;l>=0;l--)
	{
		if(l>p)
		{
			t=(t|((1<<l)&a));
		}
		
	}
	binary(t);
	t=t>>n;
	if((t>>31)&1)
	{
		for(l=0;l<n;l++)
		{
			t=t^(1<<(31-l));
		}
	}
	binary(t);
	for(l=31;l>=p;l--)
	{
		if((t>>l)&1)
		{
			a=a|(1<<l);
		}
		else if(((t>>l)&1)==0)
		{
			a=a&~(1<<l);
		}
	}
	binary(a);
	return 0;
}
