#include"header.h"
//extern int n;
//extern FILE *rfp;

void evadata(int *p,FILE *rfp)
{
	int a, b, c, d, i, in, sum;
e_ctag:	system("clear");
	printf("Present working dataset, of %d elemnets is : \n", n);
	for(i=0;i<n;i++)
	{
		printf("%d ", p[i]);
	}
	printf("\n");
	printf("Enter the option to evaluate from the following: \n \t 1). Total of the dataset. \n \t 2). Total of the dataset of a particular range of values. \n \t 3). Average of the dataset. \n \t 4). Total of values at regular interval. \n \t 5). Return to operation menu. \n");
	scanf(" %d", &in);
	switch(in)
	{
		case 1:
		{
			system("clear");
			printf("Present working dataset, of %d elemnets is : \n", n);
			for(i=0;i<n;i++)
			{
				printf("%d ", p[i]);
			}
			printf("\n");
			printf("The total of the current dataset of %d elements is :  ", n);
			for(i=0,sum=0;i<n;i++)
				sum=sum+p[i];
			fprintf(rfp,"The total of the current dataset of %d elements is : %d \n", n, sum);
			printf(" %d \n press enter to continue.. ", sum);
			scanf("%*c%*c");
			goto e_ctag;
		}
		case 2:
		{
			system("clear");
			printf("Present working dataset, of %d elemnets is : \n", n);
			for(i=0;i<n;i++)
			{
				printf("%d ", p[i]);
			}
			printf("\n");
			printf("Total of how many elements: \n");
			scanf(" %d", &a);
			printf("%d values with \n 1). Starting index  or \n 2). Ending index. \n", a);
			scanf(" %d", &b);
			if(b==1)
			{
				printf("Provide starting index for %d elements: \n", a);
				scanf(" %d", &d);
				if(d<0 || d>n)
				{
					printf("Invalid input plz try again (1-%d)... \n", n);
					goto e_ctag;
				}
				c=d-1+a;
				if(c>n)
				{
					printf("The %d values from index %d is over the dataset size range 1-%d, so all the applicable elements are taken into consideration. \n", a, d, n);
					c=n;
				}
				for(i=d-1,sum=0;i<c;i++)
					sum=sum+p[i];
				printf("the sum of %d elements with starting index %d is : %d \n press enter to continue.. \n", a, d, sum);
				fprintf(rfp,"The sum of %d elements with starting index %d is : %d \n", a, d, sum);
				scanf("%*c%*c");
				goto e_ctag;
			}
			else if(b==2)
			{
				printf("Provide ending index for %d elements: \n", a);
				scanf(" %d", &d);
				if(d<0 || d>n)
				{
					printf("Invalid input plz try again (1-%d)... \n", n);
					goto e_ctag;
				}
				c=d-1-a;
				if(c<0)
				{
					printf("The %d values till index %d is over the dataset size range 1-%d, so all the applicable elements are taken into consideration. \n", a, d, n);
					c=0;
				}
				for(i=0,sum=0;i<d;i++)
					sum=sum+p[i];
				printf("The sum of %d elements with ending index %d is : %d \n press enter to continue.. \n", a, d, sum);
				fprintf(rfp,"The sum of %d elements with ending index %d is : %d \n", a, d, sum);
				scanf("%*c%*c");
				goto e_ctag;
			}
			else
			{
				printf("Invalid input , plz try again.. \n");
				goto e_ctag;
			}
		}
		case 3:
		{
			system("clear");
			printf("Present working dataset, of %d elemnets is : \n", n);
			for(i=0;i<n;i++)
			{
				printf("%d ", p[i]);
			}
			printf("\n");
			printf("The average of the entire dataset is : \n ");
			for(i=0,sum=0;i<n;i++)
				sum=sum+p[i];
			printf(" \t  %f \n press enter to continue... \n", (float)sum/n);
			fprintf(rfp,"The average of the entire dataset is : %f \n", (float)sum/n);
			scanf("%*c%*c");
			goto e_ctag;
		}
		case 4:
		{
			system("clear");
			printf("Present working dataset, of %d elemnets is : \n", n);
			for(i=0;i<n;i++)
			{
				printf("%d ", p[i]);
			}
			printf("\n");
			printf("The interval is to be taken with respect to: \n 1). Starting index.   or\n  2). Ending index. \n");
			scanf(" %d", &a);
			if(a==1)
			{
				printf("The length of interval from starting index is: \n");
				scanf(" %d", &b);
				if(b<0 || b>n)
				{
					printf("Invalid input , plz try again.. \n press enter to continue... \n");
					scanf("%*c%*c");
					goto e_ctag;
				}
				for(i=0,sum=0,c=0;i<n;i=i+b,c++)
					sum=sum+p[i];
				printf("The sum of elements from starting index with %d intervals is : %d \n and its average is: %f \n" , b, sum, (float)sum/c);
				fprintf(rfp,"The sum of elements from starting index with %d intervals is : %d \n and its average is : %f \n", b, sum, (float)sum/c);
				printf("press enter to continue... \n");
				scanf("%*c%*c");
				goto e_ctag;
			}
			else if(a==2)
			{
				printf("The length of interval from ending index is: \n");
				scanf(" %d", &b);
				if(b<0 || b>n)
				{
					printf("Invalid input , plz try again.. \n press enter to continue... \n");
					scanf("%*c%*c");
					goto e_ctag;
				}
				for(i=n,sum=0,c=0;i>0;i=i-b,c++)
					sum=sum+p[i];
				printf("The sum of elements from starting index with %d intervals is : %d \n and its average is: %f \n" , b, sum, (float)sum/c);
				fprintf(rfp,"The sum of elements from starting index with %d intervals is : %d \n and its average is : %f \n", b, sum, (float)sum/c);
				printf("press enter to continue... \n");
				scanf("%*c%*c");
				goto e_ctag;
			}
			else
			{
				printf("invalid input.. plz try again \n press enter to continue.. \n");
				scanf("%*c%*c");
				goto e_ctag;
			}
		}
		case 5:
		{
			printf("press enter to continue.. \n");
			scanf("%*c%*c");
			return;
		}
		default:
		{
			printf("Invalid input.. plz try again... \n press enter to continue.. \n");
			scanf("%*c%*c");
			goto e_ctag;
		}
	}
}
