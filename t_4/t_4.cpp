#include<stdio.h>
#include<stdlib.h>
int fun(int x[]);
#define N 5
main()
{
	int a[N],i;
	printf("please enter array a[]: ");
	for (i=0;i<N;i++)
		a[i]=rand()%5+1;
	fun(a);
}
int fun(int x[])
{
	int t,i,j,k;
	for (i = 0; i < N-1; i++)
	{
		k=i;
		for (j = i+1; j < N-1; j++)
		{
			if (x[k]>x[j])
				k=j;
			t=x[k];
			x[k]=x[i];
			x[i]=t;
		}
	}
	for (i = 0; i < N; ++i)
	{
		printf("%d  ",x[i] );
	}
	return 0;
}