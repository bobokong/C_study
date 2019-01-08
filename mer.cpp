#include<stdio.h>
#include<string.h>
#define N 6
void sort(int x[]);		/*冒泡法从大到小排序*/
void sort_1(int b[]);		/*选择法从大到小*/
void fun(int x[]);		/*输出素数*/
void main()
{
	int i,a[N];
	printf("Please enter array a[]\n");
	for(i=0;i<N-1;i++)
	scanf("%d",&a[i]);
	printf("插入一个数：");
	scanf("%d",&a[N-1]);
	sort(a);
	fun(a);
}
void fun(int x[])
{
	int i,j,n[N],t=0;
	for(i=0;i<N;i++)
		for(j=2;j<x[i];j++)
			if(x[i]%j==0)
			{
				n[t++]=i;
				break;
			}
			printf("素数：");
				for(i=0;i<N;i++)
				{	
					j=n[i];
					printf("%d ",x[j]);
				}
}
void sort(int x[])
{
	int i,j,t;
	for(i=0;i<N-1;i++)
		for(j=0;j<N-1-i;j++)
			if(x[j]<x[j+1])
			{
				t=x[j];
				x[j]=x[j+1];
				x[j+1]=t;
			}
	printf("从大到小排序：");
	for(i=0;i<N;i++)
		printf("%d ",x[i]);
		printf("\n");
}
void sort_1(int b[])
{
	int i,j,t,k;
	for(i=0;i<N;i++)
		scanf("%d",&b[i]);
	for(i=0;i<N-1;i++)
	{
		k=i;
		for(j=i+1;j<N;j++)
			if(b[k]<b[j])
				k=j;
			t=b[i];
			b[i]=b[k];
			b[k]=t;
	}
	for(i=0;i<N;i++)
	printf("%d ",b[i]);
}