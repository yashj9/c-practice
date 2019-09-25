#include"header.h"
/*#include<stdio.h>
#include<stdlib.h>
int n;
int *z1, *z2, *z3, *z4;
FILE *rfp;
struct intarr
{
	int *ip;
	int s;
}rbi,rsi;
int bigint(int *,int);
int smlint(int *,int);
struct intarr rbigint(int *,int);
struct intarr rsmlint(int *,int);
int *bblsort(int *,int);
int *restdata(int *,int);
int *eddata(int *);
void evadata(int *, FILE *);
*/
main()
{
	int *p=0, *q=0, i, j, k, in, in2, el, r, *arr, c, f[7]={0}, *d, elef, a=0, *edd;
	struct intarr ar, rr;
	char ch;
	FILE *fp, *fp2;
	elef=sizeof(f)/sizeof(f[0]);
	system("clear");
i_start:	printf("\n \t 1). Load an Existing data from a file. \n \t 2). Start fresh on new dataset \n \t 3). About \n \t 4). Exit \n");
		scanf(" %d", &in);
	switch(in)
	{
		case 1:
		{	
			fp2=fopen("data","r+");
			fp=fopen("op_data","w+");
			if(fp2==0)
			{
				printf("File not found \n");
				goto i_start;
			}
			else
			{
				fscanf(fp2,"%d",&n);
				if(p!=0)
				{
					free(p);
					p=0;
				}
				p=malloc(sizeof(int)*n);
				for(i=0;i<n;i++)
					fscanf(fp2,"%d",&p[i]);
				printf("The scaned data is : \n");
				for(i=0;i<n;i++)
					printf("%d ", p[i]);
				printf("\n");
				fclose(fp2);
				edd=malloc(sizeof(int)*n);
				for(i=0;i<n;i++)
				{
					edd[i]=p[i];
				}
				goto t_menu;
			} 
		}
	case 2:
	{
	printf("Enter the no. of elements in array: \n");
	scanf("%d", &n);
	p=malloc(sizeof(int)*n);
	printf("Enter %d no. integer elements: \n", n);
	for(i=0;i<n;i++)
		scanf("%d", &p[i]);
	fp=fopen("op_data","w+");
	edd=malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
		edd[i]=p[i];
	}
t_menu:	system("clear");
	printf("\033[1;31m");
	printf("Present working dataset, of %d elemnets is : \n", n);
	for(i=0;i<n;i++)
	{
		printf("%d ", p[i]);
	}
	printf("\033[0m;");
	printf("\n");
	printf("Enter the operation to be performed: \n \t 1). Find big, biggest integer. \n \t 2). Find small, smallest integer. \n \t 3). Find a range of integers bigger to a particular number. \n \t 4). Find a rage of integers smaller to a particular number. \n \t 5). Sorting the data. \n \t 6). Add or Remove data on Existing data. \n \t 7). Edit existing data values. \n \t 8). Other options. \n \t 9). Evaluate values from dataset. \n");
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
			printf("Find the biggest(1st biggest) or (n)th big value: \n");
			scanf("%d", &el);
			if(el<1 || el>n)
			{
				printf("Invalid input, Plz try again.. (press enter to continue)\n");
				scanf("%*c%c", &ch);
				goto t_menu;
			}
			r=bigint(p,el);
			printf("The value is: %d \n", r);
			printf("Want to save value to the file:(y,n) \n");
			scanf(" %c", &ch);
			if(ch=='y' || ch=='Y')
			{
				fprintf(fp,"%dst big int from %d inputs is : %d \n",el,n,r);
			}
			break;
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
			printf("Find the smallest(1st smallest) or (n)th small value: \n");
			scanf("%d", &el);
			if(el<1 || el>n)
			{
				printf("Invalid input, Plz try again.. (press enter to continue)\n");
				scanf("%*c%c", &ch);
				goto t_menu;
			}
			r=smlint(p,el);
			printf("The value is: %d \n", r);
			printf("Want to save value to the file:(y,n) \n");
			scanf(" %c", &ch);
			if(ch=='y' || ch=='Y')
			{
				fprintf(fp,"%dst small int from %d inputs is : %d \n",el,n,r);
			}
			break;
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
			printf("Numbers greater than what number: \n");
			scanf("%d", &el);
			ar=rbigint(p,el);
			printf("The numbers in the data greater than the number %d are: \n", el);
			if(ar.ip==0)
			{
				printf("NONE \n");
			}
			else
			{
				for(j=0;j<ar.s;j++)
				{
					printf("%d ", ar.ip[j]);
				}
				printf("\nTotal elements greater than %d are %d .\n", el, ar.s);
			}
			printf("Want to save value to the file:(y,n) \n");
			scanf(" %c", &ch);
			if(ch=='y' || ch=='Y')
			{
				fprintf(fp,"Integers bigger than %d from %d inputs are :  ",el,n);
				if(ar.ip==0)
				{
					fprintf(fp,"NONE \n");
				}
				else
				{
					for(j=0;j<ar.s;j++)
					{
						fprintf(fp,"%d ",ar.ip[j]);
					}
					fprintf(fp,"\n");
				}
			}
			break;
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
			printf("Numbers smaller than what number: \n");
			scanf("%d", &el);
			ar=rsmlint(p,el);
			printf("The numbers in the data smaller than the number %d are: \n", el);
			if(ar.ip==0)
			{
				printf("NONE \n");
			}
			else
			{
				for(j=0;j<ar.s;j++)
				{
					printf("%d ", ar.ip[j]);
				}
				printf("\nTotal elements smaller than  %d are %d .\n", el, ar.s);
			}
			printf("Want to save value to the file:(y,n) \n");
			scanf(" %c", &ch);
			if(ch=='y' || ch=='Y')
			{
				fprintf(fp,"Integers smaller than %d from %d inputs are :  ",el,n);
				if(ar.ip==0)
				{
					fprintf(fp,"NONE \n");
				}
				else
				{
					for(j=0;j<ar.s;j++)
					{
						fprintf(fp,"%d ",ar.ip[j]);
					}
					fprintf(fp,"\n");
				}
			}
			break;
		}	
		case 5:
		{
sort:			system("clear");
			printf("Present working dataset, of %d elemnets is : \n", n);
			for(i=0;i<n;i++)
			{
				printf("%d ", p[i]);
			}
			printf("\n");
			printf("Select sorting order: \n \t 1). Assending order. \n \t 2). Deccending order. \n");
			scanf("%d", &el);
			if(el<1 || el>2)
			{
				printf("Invalid Input, Plz try again... (press enter to continue)\n");
				scanf("%*c%c", &ch);
				goto t_menu;
			}
			switch(el)
			{
				case 1:
				case 2:
				{
					arr=bblsort(p,el);
					printf("The sorted array is: \n");
					for(j=0;j<n;j++)
					{
						printf("%d ", arr[j]);
					}
					printf("\n");
					printf("Want to save data in the file:(y/n) \n");
					scanf(" %c", &ch);
					if(ch=='y' || ch=='Y')
					{
						fprintf(fp,"The sorted data is: ");
						for(j=0;j<n;j++)
						{
							fprintf(fp,"%d ",arr[j]);
						}
						fprintf(fp,"\n");
					}
					break;
				}
				default:
				{
					printf("Ivalid sorting choice. PLz select 1 or 2. (press enter to continue)\n"); 
					scanf("%*c%*c");
					goto sort;
				}
			}
			break;
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
e_menu:			printf("1). Add data \n2). Remove data \n");
			scanf(" %d", &el);
			if(el<1 || el>2)
			{
				if(a<3)
				{
					printf("\n \n  \t HAHAHA :D, funny!. :| \n But plz make a vaild choice. \n");
					a++;
					goto e_menu;
				}
				else
				{
					printf("\n \n  \t NANANA :P, NOT funny!. :| \n What do you want!!!!.. is it that difficult to make a choice from jst 2 options????? \n");
					printf("Dont MESS$ with me Else i may DELETE YOUR DATA!!! >:| .... \n  Jst kidding :D \n -------------------------------------------------------Congrats You Found an Ester Egg in this app ------------------*_*\n");
					a=0;
					printf("Go back to operation menu:(else will exit the app) (y/n) \n");
					scanf(" %c", &ch);
					if(ch=='y' || ch=='Y')
						goto t_menu;
					else
						return;
				}
			}
			else
			{
				p=restdata(p,el);
				edd=realloc(edd,sizeof(int)*n);
				for(i=0;i<n;i++)
				{
					edd[i]=p[i];
				}
				printf("The new dataset of %d elements is : \n", n);
				for(i=0;i<n;i++)
				{
					printf("%d ", p[i]);
				}
				printf("\n");
				printf("Want to save it in file:(y/n) \n");
				scanf(" %c", &ch);
				if(ch=='y' || ch=='Y')
				{
					fprintf(fp,"The new dataset of %d elements is : ",n);
					fp2=fopen("data","w+");
					fprintf(fp2,"%d ",n);
					for(i=0;i<n;i++)
					{
						fprintf(fp,"%d ",p[i]);
						fprintf(fp2,"%d ",p[i]);
					}
					fprintf(fp,"\n");
					fclose(fp2);
				}
			}
			break;
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
			edd=eddata(edd);
			for(i=0;i<n;i++)
				p[i]=edd[i];
			printf("Data Editing done successfullY \n \t To make this eddited dataset as base data set , choose \"save existing data to a file\" in other options (8) in the operation menu!!. \n Press enter to continue ... \n");
			scanf("%*c");
			break;
		}
		case 8:
		{
			system("clear");
			printf("Present working dataset, of %d elemnets is : \n", n);
			for(i=0;i<n;i++)
			{
				printf("%d ", p[i]);
			}
			printf("\n");
			printf("\n \t 1). Save existing data to a file \n \t 2). Load data existing in a file \n \t 3). Reset app resources(soft reboot) (unsaved data will be lost) \n \t 4). Exit app.(unsaved data will be lost). \n \t 5). Go back to operation menu. \n");
			scanf(" %d", &in2);
			switch(in2)
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
					printf("Previous dataset will be erased!.. continue? (y/n) \n");
					scanf(" %c", &ch);
					if(ch=='y' || ch=='Y')
					{
						fprintf(fp,"The new dataset of %d elements is : \n", n);
						fp2=fopen("data","w+");
						fprintf(fp2,"%d ",n);
						for(i=0;i<n;i++)
						{
							fprintf(fp,"%d ", p[i]);
							fprintf(fp2,"%d ", p[i]);
						}
						fprintf(fp,"\n");
						fclose(fp2);
					}
					printf("New data saved successfully in the file, to make it as a working data set please load the data set using option \"Load data existing in a file\" found in other options (8) in operation menu. \n \t Else you can continue working on the existing non-edited (working) dataset. \n");
					scanf("%*c%*c");
					goto t_menu;
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
					printf("By loading new dataset fro file, the present working dataset will be lost!. \n \t Do you want to continue? (y/n) \n");
					scanf(" %c", &ch);
					if(ch=='y' || ch=='Y')
					{
						fp2=fopen("data","r+");
						fscanf(fp2," %d", &n);
						for(i=0;i<n;i++)
						{
							fscanf(fp2," %d",&p[i]);
						}
						fclose(fp2);
						printf("Loading dataset successfull!!. (press enter to continue)\n");
						scanf("%*c%*c");
						fprintf(fp,"Loading dataset succesfull. \n");
					}
					goto t_menu;
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
				printf("The current data will be cleared, unsaved data will be lost. \n \t  are you sure you want to continue:(y/n) \n");
				scanf(" %c",&ch);
				if(ch=='y' || ch=='Y')
				{
					f[0]=bigint(p,0);
					f[1]=smlint(p,0);
					rr=rbigint(q,0);
					f[2]=rr.s;
					rr=rsmlint(q,0);
					f[3]=rr.s;
					d=bblsort(q,0);
					if(d==0)
					f[4]=1;
					d=restdata(q,0);
					if(d==0)
					f[5]=1;
					d=eddata(q);
					if(d==0)
					f[6]=1;
					for(k=0;k<elef;k++)
					{
						printf("f[%d]=%d  \n ", k, f[k]);
						if(f[k]!=1)
						break;
					}
					if(k==elef)
					{
						if(p!=0)
							free(p);
						p=0;
						r=0;
						arr=0;
						k=0;
						ch=0;
						el=0;
						ar.ip=0;
						ar.s=0;
						rr.ip=0;
						rr.s=0;
						n=0;
						for(i=0;i<elef;i++)
							f[i]=0;
						printf("Data Clearing Successfull. (press enter to continue)\n ");
					}
					else
					{
						printf("Unable to clear all data successfully. (press enter to continue)\n");
					}
					scanf("%*c%*c");
					printf("Enter new data set: (Enter n to exit) (unsaved data will be lost) (y/n) \n");
					scanf(" %c", &ch);
					if(ch=='y' || ch=='Y')
					{
						goto i_start;
					}
					else
					{	
						return;
					}
				}
				else
				{
					goto t_menu;
				}
			}
			case 4:
			{
				return;
			}
			default:
			{
				goto t_menu;
			}
		}
		case 9:
		{
			system("clear");
			printf("Present working dataset, of %d elemnets is : \n", n);
			for(i=0;i<n;i++)
			{
				printf("%d ", p[i]);
			}
			printf("\n");
			evadata(p,fp);
			goto t_menu;
		}
		default:
		{
			printf("Plz enter a valid option: (1-9) . \n");
			scanf("%*c%*c");
			goto t_menu;
		}
	}
		break;
	}
		break;
		case 3:
		{
			printf("About\n");
		}
		case 4:
		{
			return;
		}
		default:
		{
			printf("Not a valid input, plz try again. \n \n");
			scanf("%*c%*c");
			goto i_start;
		}
	}
	}
	printf("\n\n");
	goto t_menu;
;
}
