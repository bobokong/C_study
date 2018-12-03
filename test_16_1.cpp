#include<stdio.h>
main()
{
	int *max,*point_1,*point_2,a,b;
	scanf("%d%d",&a,&b);
	point_1=&a;point_2=&b;
	if(*point_1<*point_2)
	{
		max=point_2;point_2=point_1;point_1=max;
	}
	printf("%d  %d",*point_1,*point_2);
	return 0;
}