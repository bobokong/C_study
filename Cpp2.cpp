#include<stdio.h>
main()
{
	int i=0,a[5]={5,19,6};
	int j,b,max;
	printf("insert a\n");
	scanf("%d",&a[3]);
	for(i=0;i<5;i++)
		printf("%d ",a[i]);
		printf("\n");
	for(i=0;i<5;i++)
	{
		j=i;
		max=a[i];
		for(j=i;j<5;j++)
			if(a[j]>max)
			{
				max=a[j];
				a[j]=a[i];
			}
		printf("%d  ",max);
	}
}
