#include<stdio.h>
int fun(int x);
main()
{
	int x;
	scanf("%d",&x);
	fun(x);
}
int fun(int x)
{ 
	int a,i=0;
	if(x!=0)
	{
		a=x%10;
		x=x/10;
		printf("%d ",a);
		fun(x);
	}
	return 0;
}