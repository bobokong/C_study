#include<stdio.h>
#define N 10
int fun(int a[]);
main()
{
	int a[100],len,i;
	printf("enter a: ");
	for(i=0;i<N;i++)
	scanf("%d",&a[i]);
	fun(a);
}
int fun(int a[])
{
	int i,j,t;
	for ( j = 0; j < N-1; j++)
		for( i=j; i < N-1; i++)
			if(a[j]<a[i])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
	for ( j = 0; j < N; j++)
		printf("%d ",a[j]);
	printf("\n");
	return 1;
}