#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int a[8]={1,2,3,4,5,6,7,8}, b, c, d=100000, i, j, k;
	clock_t st;
	for(i=0,b=0;i<8;i++)
	{
		b=b+a[i];
	}
	b=b/8;
	system("clear");
	for(i=0;i<8;i++)
	{
		printf(" a[%d]= %d , ",i, a[i]);
		c=a[i]*10;
		for(;c>1;c=c/((float)b/2))
		{
			
			st=clock();
			while(clock()<st+d);
			fflush(stdout);
			printf("==");
		}
		printf("| \n");
	}
}
