#include<stdio.h>
#define N 10
void s();
int f(int n);		//十进制转八进制
int fun();
main()
{
	int a;
	scanf("%d",&a);
	f(a);
	printf("\n");
	fun();
	printf("\n");
	s();
}
int f(int n)
{
	int j,k=0,m,i=0;
	while(n)
	{
		m=n%8;
		for(j=0;j<i;j++)
			m*=10;
		n=n/8;
		i++;
		k=m+k;
	}
	printf("%d",k);
	return 0;
}
void s()
{
	int a[N][N],i,j,t;
	for(i=0;i<N;i++)
	{
		a[i][i]=1;
		a[i][0]=1;
	}
	for(i=2;i<N;i++)
		for(j=1;j<i;j++)
		a[i][j]=a[i-1][j]+a[i-1][j-1];
	t=N;
	for(i=0;i<N;i++)
	{
	for(t=N-i;t>0;--t)
	printf("  ");
		for(j=0;j<=i;j++)
			printf("%4d",a[i][j]);
		printf("\n");
	}
}

int fun()
{
	int i,j,t;
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=i;j++)
		{t=i*j;
		printf("%d ",t);
		}
		printf("\n");
	}
	return 1;
}
