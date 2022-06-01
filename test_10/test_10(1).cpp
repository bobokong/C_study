#include "stdio.h"
int fac(int m)
{
	int i=1,sum=1;
	for(i=1;i<=m;i++)
		sum=sum*i;
	return sum;
	}
	int main()
	{
	int n;
	double f;
	printf("input n:");
	scanf("%d",&n);
	f=fac(n);
	printf("%d!=%f\n",n,f);
}
