#include<stdio.h>
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
