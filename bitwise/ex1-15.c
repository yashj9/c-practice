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
	int a, d=0;
	short b, l, p, n;
	printf("Enter the value of integer: ");
	scanf("%d",&a);
	printf("Enter the number bits to be extracted: ");
	scanf("%hd", &n);
	printf("Enter the position of the starting bit for extraction: ");
	scanf("%hd", &p);
	for(l=1;l<=n;l++)
	{
		d=d|(a&(1<<p));
		p++;
	}
	binary(a);
	binary(d);
	return 0;
}
	
