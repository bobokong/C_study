#include<stdio.h>
int fun(int n);
main()
{
	int n;
	scanf("%d",&n);
	printf("%d",fun(n));
}
int fun(int n)
{
	int s;
	if(n==1||n==2)
		s=1;
	else if(n>1)
		s=fun(n-2)+fun(n-1);
	else
		printf("error");
	return s;
}
