#include "stdio.h"
#define N 5
main()
{
	int i,j,k=0,t=0,a[N];
	for(i=0;i<N;i++)
	scanf("%d",&a[i]);
	for(i=0;i<N;i++)
	{
		k=i;
		for(j=i;j<N;j++)
			if(a[k]<a[j])
				k=j;
			t=a[k];
			a[k]=a[i];
			a[i]=t;
	}
	for(i=0;i<N;i++)
	printf("%d",a[i]);
	return 0;
}
