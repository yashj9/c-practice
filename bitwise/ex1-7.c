#include<stdio.h>
void binary(int x);
int main()
{
	int a, i, k;
	short b, s, f=0;
	printf("Enter the value of integer: \n");
	scanf("%d",&a);
	printf("Enter the number of bits to be rotated: \n");
	scanf("%hd",&b);
	printf("Enter the direction of rotation: \n \t 1). To the left. \n \t 2). To the right. \n \t");
	scanf("%hd",&s);
	i=a;
	if(s==1)
	{
		for(b;b>0;b--)
		{
			k=(i>>31)&1;
			i=i<<1;
			i=i|k;
		}
	}
	if(s==2)
	{
		for(b;b>0;b--)
		{
			k=1&i;
			i=i>>1;
			if(f==1)
			{
				i=i-(1<<31);
			}
			i=i|(k<<31);
			if(k==1)
			{
				f=1;
			}
			else
			{
				f=0;
			}
		}
	}
	else
	{
		printf("Invalid option. \n");
	}
	printf("The binary of input number is: \n \t ");
	binary(a);
	printf("The binary of output is: \n \t ");
	binary(i);
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
