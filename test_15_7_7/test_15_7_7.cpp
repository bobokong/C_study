#include<stdio.h>
void main()
{
	int i=0,a[20];
	for(;i<20;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]<0)
		{
			a[i]=0;
			printf("%d",a[i]);
		}
		else
			printf("%d",a[i]);
	}
}