#include <stdio.h>
#include <math.h>
double fun(int n)
{
	double sum, s0, s1, s2, s;
	int k;
	sum=1.0;
	if(n<=2)
		sum=0.0;
	s0=0.0;
	s1=0.0;
	s2=1.0;
	for(k=4;k<=n;k++)
	{ 
		s=s0+s1+s2;
		sum+=sqrt(s);
		s0=s1;
		s1=s2;
		s2=s;
	}
}
main()
{ 
	int n;
	printf("input n=");
	scanf("%d",&n);
	printf("%f\n",fun(n));
}
