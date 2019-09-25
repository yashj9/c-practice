#include"header.h"

FILE * mcrexp(FILE *fp)
{
	int h, i, j, k, l, mc1=0, x=0, y=0, z=0;
	char ch, *ar, *arr, def[9]="#define", deff[9], **pr, **pr2, **pr3;
	FILE *fp1, *fp2;
	ar=malloc(sizeof(char)*(g+2));
	arr=malloc(sizeof(char)*(g+2));
	pr=malloc(sizeof(char *));
	pr2=malloc(sizeof(char *));
	pr3=malloc(sizeof(char *));
//	while(fgets(ar,g+2,fp))
	while(fscanf(fp,"%s",ar)!=-1)
	{
		for(i=0,j=0,k=0;ar[i];i++)
		{
			if(ar[i]==def[j])
			{
				j++;
			}
			else
				j=0;
	//		printf(" %s\n", ar);
			if(j==7)
			{
				mc++;
				j=0;
				pr=realloc(pr,sizeof(char *)*mc);
				pr2=realloc(pr2,sizeof(char *)*mc);
				pr3=realloc(pr3,sizeof(char *)*mc);
				pr[mc-1]=malloc(sizeof(char)*(g+2));
				pr2[mc-1]=malloc(sizeof(char)*(d+2));
				pr3[mc-1]=malloc(sizeof(char)*(g*f));
				fscanf(fp,"%s",pr[mc-1]);
			//	printf(" %s %d \n",arr, mc);
			//	pr[mc-1]=arr;
				fseek(fp,2,SEEK_CUR);
				while((pr3[mc-1][k++]=fgetc(fp))!='}');
				pr3[mc-1][k-1]='\0';
				
			}
		}
	}
	rewind(fp);
	fp1=fopen("op2","w+");
	while(fscanf(fp,"%s",arr)!=-1)
	{
	/*	if(strcmp(arr,def)==0)
		{
			y=1;
			z=0;
			continue;
		}
		else
		{
			ch=fgetc(fp);
			if(ch=='\n')
			{
				z=1;
			}
			fseek(fp,-2,SEEK_CUR);
		} */
		for(i=0;i<mc;i++)
		{
			if(strcmp(arr,pr[i])==0)
			{
				ch=fgetc(fp);
		/*		if(z==1)
				{
					y=0;
				}
				if(y==1)
				{
					x=1;
					break;
				} */
				fprintf(fp1,"%s",pr3[i]);
				if(ch==' ' || ch=='\n')
					fputc(ch,fp1);
				x=1;
				break;
			}
		}
		if(x==1)
		{
			x=0;
			continue;
		}
		fprintf(fp1,"%s",arr);
		ch=fgetc(fp);
		if(ch==' ' || ch=='\n')
			fputc(ch,fp1);
	}
	fp2=fopen("op3","w+");
	rewind(fp);
	fclose(fp1);
	fp1=fopen("op2","r+");
	while(fscanf(fp1,"%s",arr)!=-1)
	{
		if(strcmp(arr,def)==0)
		{
			while((ch=fgetc(fp1))!='}')
				continue;
			continue;
		}
		fprintf(fp2,"%s",arr);
		ch=fgetc(fp1);
		if(ch==' ' || ch=='\n')
			fputc(ch,fp2);
	}
	for(i=0;i<mc;i++)
	{
		printf(" %s \n", pr[i]);
		printf(" %s \n", pr3[i]);
	}
	printf("Number of macros detected: %d . \n", mc);
	return fp2;
}
