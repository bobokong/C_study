#include<stdio.h>
int f(int n);
main()
{
	int a;
	scanf("%d",&a);
	f(a);
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