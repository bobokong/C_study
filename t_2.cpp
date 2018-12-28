#include<stdio.h>
#include<stdlib.h>
#define N 30000
int fun(int a[]);
main()
{
	int x[N],rand(),i=0;
	printf("please enter array x[]: \n");
	for(;i<N;i++)
		x[i]=rand()%30000+1;
	fun(x);
}
int fun(int a[])
{
	int i=0,j=0,t;
	for(i=0;i<N-1;i++)
		for(j=0;j<N-1-i;j++)
		{
			if(a[j]<a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
		for(i=0;i<N;i++)
		printf("%d ",a[i]);
		return 0;
}
