#include<stdio.h>
#include<math.h>
main()
{
	double x[99],y[99],sum=0;
	int i=0;
	x[0]=0;
	for(i=0;i<100;i++)
	{
		x[i]+=1/100;
		y[i]=4*sqrt(1-x[i]*x[i])/100;
		sum+=x[i]*y[i];
	}
	printf("%f",sum);
}