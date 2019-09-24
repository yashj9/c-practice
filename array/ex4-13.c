#include<stdio.h>
void pushf(int *);
void popf(int *);
main()
{
	int a[20]={0}, b, c=0, d=0, e, f, ele;
	char ch;
	ele=sizeof(a)/sizeof(a[0]);
menu:
	printf("ENter your choice: \n");
	printf("\t 1). View the Stack. \n \t 2). Push a value in. \n \t 3). Pop a value out. \n \t 4). Empty/Reset the Stack. \n \t 5). Exit. \n");
	scanf("%d", &b);
	switch (b)
	{
		case (1):
		{
			if(d>0)
			{
				printf(" Top ---> ");
				for(c=ele-1;c>=0;c--)
				{
					if(a[c]==0)
						continue;
					printf(" %d \n \t  ", a[c]);
				}
			}
			else
			{
				printf("Entries are empty in the Stack. \n \n");
				goto menu;
			}
			break;
		}
		case (2):
		{
			printf("Enter a value to stack: \n ");
			scanf("%d", &a[d]);
			d++;
			break;
		}
		case (3):
		{
			for(c=ele-1;c>=0;c--)
			{
				if(a[c]!=0)
				break;
			}
			if(c==-1)
			{
				printf("The stack is Empty. \n \n");
			}
			else
			{
				d=c;
				printf("The value %d is poped out. \n \n", a[d]);
				a[d]=0;
			}
			c=0;
			break;
		}
		case (4):
		{
			printf("Confirm to empty the Stack:(y/n) \n");
			scanf(" %c", &ch);
			if(ch=='Y' || ch=='y')
			{
				for(c=0;c<ele;c++)
				{
					a[c]=0;
				}
				d=0;
				printf("Stack cleared successfully! \n \n");
			}
			else
				goto menu;
			break;
		}
		case (5):
		{
			printf("Exiting ..... \n \t Exiting done.\n \n");
			return 0;
		}
		default:
		{
			printf("Plz Enter a valid option. \n \n");
			goto menu;
		}
	}
//	printf(" c= %d , d= %d  \n", c, d);
	goto menu;
	;
}	
