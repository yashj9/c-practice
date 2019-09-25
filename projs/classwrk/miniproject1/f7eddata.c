#include"header.h"
//extern int n, *z4;
//extern void evadata(int *);

int * eddata(int *p)
{
	int a, b, c, co=0, d, e, i, in, r, val, itr, ac, rep;
	char ch;
	if(p==0 && z4!=0)
	{
		free(z4);
		z4=0;
		return 0;
	}
	else if(p==0)
	{
		z4=0;
		return 0;
	}
	if(p!=0)
	{		
ed_ctag:		system("clear");
		printf("Present working dataset, of %d elemnets is : \n", n);
		for(i=0;i<n;i++)
		{
			printf("%d ", p[i]);
		}
		printf("\n");
ed_tag:		printf("Choose the following operation to be performed: \n");
		printf(" \t 1). Edit a single element. \n \t 2). Edit a series of elements with a same value input. \n \t 3). Edit a series of elements with a particular regular interval with same value. \n \t 4). Edit a series of elements with different individual inputs. \n \t 5). Edit a series of elements with a particular regular interval with different individual inputs. \n \t 6). Find if a particular value exists or not. \n \t 7). Replace a value with another value throughout the set. \n \t 8). Quit editing mode.(Return to operation menu) \n");
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
				printf("Which element value you want to edit: (1-%d) \n", n);
				scanf(" %d", &a);
				if(a<1 || a>n)
				{
					printf("plz try again, no such index found. (1-%d) \n", n);
					co++;
					if(co>2)
					{
						goto ed_ctag;
						co=0;
					}
					goto ed_tag;
				}
				else
				printf("Enter the value to be changed: (existing value is %d ) \n", p[a-1]);
				scanf(" %d", &b);
				p[a-1]=b;
				printf("DOne successfully! , return to editing menu:(y/n) \n");
				scanf(" %c", &ch);
				if(ch=='y' || ch=='Y')
				{
					co=0;
					goto ed_ctag;
				}
				else	
					return p;
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
				printf("How many values you want to change with different value? \n");
				scanf(" %d",&a);
				if(a<0)
					a=-a;
				if(a==0)
					goto ed_ctag;
				printf("%d elements with \n \t 1). starting index input \n \t or \n \t 2). end index input: \n",a);
				scanf(" %d", &e);
				if(e==1)
				{
					printf("%d elements to be changed with starting index : \n", a);
					scanf(" %d", &c);
					if(c<0 || c>n)
					{
						printf("no such index as starting index possible, plz try again.. \n");
						goto ed_ctag;
					}
					r=c+a-1;
					if((c+a-1)>n)
					{
						printf("All possible elements will affected. (Range is above length of dataset). \n");
						r=n;
					}
					for(i=c-1;i<r;i++)
					{
						printf("Enter %dth element value: (exisiting value is %d) \n",i,p[i]);
						scanf(" %d", &p[i]);
					}
					printf("Process done.. \n Goto edit menu:(or quit editing) (y/n) \n");
					scanf(" %c", &ch);
					if(ch=='y' || ch=='Y')
						goto ed_ctag;
					else
						return p;
				}
				if(e==2)
				{
					printf("%d elements to be changed with end index : \n", a);
					scanf(" %d", &c);
					if(c<0 || c>n)
					{
						printf("no such index as end index possible, plz try again.. \n");
						goto ed_ctag;
					}
					r=c-a-1;
					if((c+a-1)>n)
					{
						printf("All possible elements will affected. (Range is above length of dataset). \n");
						r=0;
					}
					for(i=r;i<c-1;i++)
					{
						printf("Enter %dth element value: (exisiting value is %d) \n",i,p[i]);
						scanf(" %d", &p[i]);
					}
					printf("Process done.. \n Goto edit menu:(or quit editing) (y/n) \n");
					scanf(" %c", &ch);
					if(ch=='y' || ch=='Y')
						goto ed_ctag;
					else
						return p;
				}
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
				printf("How many values you want to change at a time with same value? \n");
				scanf(" %d",&a);
				if(a<0)
					a=-a;
				if(a==0)
					goto ed_ctag;
				printf("%d elements with \n \t 1). starting index input \n \t or \n \t 2). end index input: \n",a);
				scanf(" %d", &e);
				if(e==1)
				{
					printf("%d elements to be changed with starting index : \n", a);
					scanf(" %d", &c);
					if(c<0 || c>n)
					{
						printf("no such index as starting index possible, plz try again.. \n");
						goto ed_ctag;
					}
					r=c+a-1;
					if((c+a-1)>n)
					{
						printf("All possible elements will affected. (Range is above length of dataset). \n");
						r=n;
					}
					printf("Enter element value for all selected elements: (%d - %d elements) \n",c,r);
					scanf(" %d", &val);
					for(i=c-1;i<r;i++)
					{
						p[i]=val;
					}
					printf("Process done.. \n Goto edit menu:(or quit editing) (y/n) \n");
					scanf(" %c", &ch);
					if(ch=='y' || ch=='Y')
						goto ed_ctag;
					else
						return p;
				}
				if(e==2)
				{
					printf("%d elements to be changed with end index : \n", a);
					scanf(" %d", &c);
					if(c<0 || c>n)
					{
						printf("no such index as end index possible, plz try again.. \n");
						goto ed_ctag;
					}
					r=c-a-1;
					if((c+a-1)>n)
					{
						printf("All possible elements will affected. (Range is above length of dataset). \n");
						r=0;
					}
					printf("Enter element value for all selected elements: (%d - %d elements) \n",r,c);
					scanf(" %d", &val);
					for(i=r;i<c-1;i++)
					{
						p[i]=val;
					}
					printf("Process done.. \n Goto edit menu:(or quit editing) (y/n) \n");
					scanf(" %c", &ch);
					if(ch=='y' || ch=='Y')
						goto ed_ctag;
					else
						return p;
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
				printf("How many values you want to change with different value? \n");
				scanf(" %d",&a);
				if(a<0)
					a=-a;
				if(a==0)
					goto ed_ctag;
				printf("With interval of how many elements: \n");
				scanf(" %d", &itr);
				printf("%d elements with %d interval with \n \t 1). starting index input \n \t or \n \t 2). end index input: \n",a, itr);
				scanf(" %d", &e);
				if(e==1)
				{
					printf("%d elements to be changed with starting index : \n", a);
					scanf(" %d", &c);
					if(c<0 || c>n)
					{
						printf("no such index as starting index possible, plz try again.. \n");
						goto ed_ctag;
					}
					r=c+(a*itr)-1;
					if((c+(a*itr)-1)>n)
					{
						printf("All possible elements will affected. (Range is above length of dataset). \n");
						r=n;
					}
					for(i=c-1;i<r;i=i+itr)
					{
						printf("Enter %dth element value: (exisiting value is %d) \n",i,p[i]);
						scanf(" %d", &p[i]);
					}
					printf("Process done.. \n Goto edit menu:(or quit editing) (y/n) \n");
					scanf(" %c", &ch);
					if(ch=='y' || ch=='Y')
						goto ed_ctag;
					else
						return p;
				}
				if(e==2)
				{
					printf("%d elements to be changed with end index : \n", a);
					scanf(" %d", &c);
					if(c<0 || c>n)
					{
						printf("no such index as end index possible, plz try again.. \n");
						goto ed_ctag;
					}
					r=c-(a*itr)-1;
					if((c+(a*itr)-1)>n)
					{
						printf("All possible elements will affected. (Range is above length of dataset). \n");
						r=0;
					}
					for(i=r;i<c-1;i=i+itr)
					{
						printf("Enter %dth element value: (exisiting value is %d) \n",i,p[i]);
						scanf(" %d", &p[i]);
					}
					printf("Process done.. \n Goto edit menu:(or quit editing) (y/n) \n");
					scanf(" %c", &ch);
					if(ch=='y' || ch=='Y')
						goto ed_ctag;
					else
						return p;
				}
			}
			case 5:
			{
				system("clear");
				printf("Present working dataset, of %d elemnets is : \n", n);
				for(i=0;i<n;i++)
				{
					printf("%d ", p[i]);
				}
				printf("\n");
				printf("How many values you want to change at a time with same value? \n");
				scanf(" %d",&a);
				if(a<0)
					a=-a;
				if(a==0)
					goto ed_ctag;
				printf("With interval of how many elements: \n");
				scanf(" %d", &itr);
				printf("%d elements with %d interval with \n \t 1). starting index input \n \t or \n \t 2). end index input: \n",a, itr);
				scanf(" %d", &e);
				if(e==1)
				{
					printf("%d elements to be changed with starting index : \n", a);
					scanf(" %d", &c);
					if(c<0 || c>n)
					{
						printf("no such index as starting index possible, plz try again.. \n");
						goto ed_ctag;
					}
					r=c+(a*itr)-1;
					if((c+(a*itr)-1)>n)
					{
						printf("All possible elements will affected. (Range is above length of dataset). \n");
						r=n;
					}
					printf("Enter element value for all selected elements: (%d - %d with interval of %d) \n",c,r,itr);
					scanf(" %d", &val);
					for(i=c-1;i<r;i=i+itr)
					{
						p[i]=val;
					}
					printf("Process done.. \n Goto edit menu:(or quit editing) (y/n) \n");
					scanf(" %c", &ch);
					if(ch=='y' || ch=='Y')
						goto ed_ctag;
					else
						return p;
				}
				if(e==2)
				{
					printf("%d elements to be changed with end index : \n", a);
					scanf(" %d", &c);
					if(c<0 || c>n)
					{
						printf("no such index as end index possible, plz try again.. \n");
						goto ed_ctag;
					}
					r=c-(a*itr)-1;
					if((c+(a*itr)-1)>n)
					{
						printf("All possible elements will affected. (Range is above length of dataset). \n");
						r=0;
					}
					printf("Enter element value for all selected elements: (%d - %d with interval of %d) \n",r,c,itr);
					scanf(" %d", &val);
					for(i=r;i<c-1;i=i+itr)
					{
						p[i]=val;
					}
					printf("Process done.. \n Goto edit menu:(or quit editing) (y/n) \n");
					scanf(" %c", &ch);
					if(ch=='y' || ch=='Y')
						goto ed_ctag;
					else
						return p;
				}
			}
			case 6:
			{
				system("clear");
				printf("Present working dataset, of %d elemnets is : \n", n);
				for(i=0;i<n;i++)
				{
					printf("%d ", p[i]);
				}
				printf("\n");
				printf("Enter the value to be looked (searched) for in the elements: \n ");
				scanf(" %d", &val);
				for(i=0,ac=0;i<n;i++)
				{
					if(p[i]==val)
					{
						printf("The value %d is found at %dth index . \n",val, i+1);
						ac++;
					}
				}
				printf("The value %d is found %d times repeated. \n", val, ac);
				printf("Goto edit menu:(else quit to operation menu) (y/n) \n");
				scanf(" %c", &ch);
				if(ch=='y' || ch=='Y')
					goto ed_ctag;
				else
					return p;
			}
			case 7:
			{
				system("clear");
				printf("Present working dataset, of %d elemnets is : \n", n);
				for(i=0;i<n;i++)
				{
					printf("%d ", p[i]);
				}
				printf("\n");
				printf("Enter the value to be looked (replaced) for in the elements: \n ");
				scanf(" %d", &val);
				for(i=0,ac=0;i<n;i++)
				{
					if(p[i]==val)
					{
						printf("The value is found at %dth index . \n", i+1);
						ac++;
					}
					printf("The is found %d times repeated. \n", ac);
				}
				if(ac==0)
				{
					printf("No such value found to be in the dataset.. \n");
					printf("Goto edit menu: (else goto operation menu) (y/n) \n");
					scanf(" %c", &ch);
					if(ch=='y' || ch=='Y')
						goto ed_ctag;
					else
						return p;
				}
				else
				{
					printf("Enter value to be replaced with existing %d values: \n", val);
					scanf(" %d", &rep);
					for(i=0;i<n;i++)
					{
						if(p[i]==val)
							p[i]=rep;
					}
				}
				printf("Goto edit menu:(else quit to operation menu) (y/n) \n");
				scanf(" %c", &ch);
				if(ch=='y' || ch=='Y')
					goto ed_ctag;
				else
					return p;
			}
			case 8:
			{
				printf("To make changes permanent or make as a working dataset save the file first from other options and load it to make it into effective. \n \t Press Enter to continue.");
				scanf("%*c%*c");
				return p;
			}
			default:
			{
				printf("Invalid input try again (1-8) (press enter to continue)\n");
				scanf("%*c%*c");
				goto ed_ctag;
			}
		}
	}
}
