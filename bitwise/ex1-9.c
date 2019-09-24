#include<stdio.h>
void binary(int x);
int main()
{
	int a, z, d=0, p=0;
	short b, k;
	printf("Enter the value: ");
	scanf("%d", &a);
	z=a;
	for(b=31;b>=0;b--)
	{
		k=(z>>31)&1;
		z=z<<1;
		d=d|k<<p;
		z=z|k;
		p++;
	}
	printf("The binary of entered number is : \n \t ");
	binary(a);
	printf("The binary inversed is : \n \t ");
	binary(d);
	return 0;
}
	

void binary(int x)
{
	short sl, sb;
	for(sl=31;sl>=0;sl--)
	{
		printf("%hd", sb=((x>>sl)&1));
	}
	printf(" \n ");
}	
