#include<stdio.h>
int fun(int x);
void main()
{
	int s,x;
	printf("Enter x: ");
	scanf("%d",&x);
	s=fun(x);
	printf("%d\n",s);
}
int fun(int x)
{
	if(x==0)
	return 3*x;
	else
	return 2*fun(x-1)+x*x;
}