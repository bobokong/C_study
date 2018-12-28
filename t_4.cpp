#include<stdio.h>
#define M 5
void main()
{
	int b[M],i,j,t,k;
	for(i=0;i<M;i++)
		scanf("%d",&b[i]);
	for(i=0;i<M-1;i++)
	{
		k=i;
		for(j=i+1;j<M;j++)
			if(b[k]<b[j])
				k=j;
			t=b[i];
			b[i]=b[k];
			b[k]=t;
	}
	for(i=0;i<M;i++)
	printf("%d ",b[i]);
}