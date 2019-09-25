#include"header.h"
//extern int n, *z3;

int * restdata(int *p,int x)
{
	int a, b, c, d, e, i;
	char ch;
	if(x==0 && z3!=0)
	{
		free(z3);
		z3=0;
		return 0;
	}
	else if(x==0)
	{
		z3=0;
		return 0;
	}
	if(x==1)
	{
		system("clear");
		printf("Present working dataset, of %d elemnets is : \n", n);
		for(i=0;i<n;i++)
		{
			printf("%d ", p[i]);
		}
		printf("\n");
		printf("How many NEW values to be added on the working set: \n");
		scanf(" %d",&a);
		if(a<0)
			a=-a;
		c=n;
		n=n+a;
		p=realloc(p,sizeof(int)*n);
		if(a!=0)
		{
			printf("New elements are: \n");
			for(b=c;b<n;b++)
			{
				scanf(" %d", &p[b]);
			}
		}
		return p;
	}
	if(x==2)
	{
		system("clear");
		printf("Present working dataset, of %d elemnets is : \n", n);
		for(i=0;i<n;i++)
		{
			printf("%d ", p[i]);
		}
		printf("\n");
		printf("How many elements are to be reduced in the working data set:(The trailing elements will be removed) \n");
		scanf(" %d", &a);
		if(a<0)
			a=-a;
		if(a>=n)
		{
			printf("You want to clear entire dataset: (y/n) \n");
			scanf(" %c", &ch);
			if(ch=='y' || ch=='Y')
			{
				n=1;
				p=realloc(p,sizeof(int)*n);
				p[0]=0;
				return p;
			}
		}
		n=n-a;
		p=realloc(p,sizeof(int)*n);
		return p;
	}
}
