#include <stdio.h> 
fun(int x) 
{
	int n=0,s1,s2,s3,t; 
	t=100; 
	while(t<=999)
	{
		s1=t%10;
		s2=(t/10)%10;
		s3=t/100; 
		if(s1+s2+s3==x) 
		{ 
			printf("%d ",t); 
			n++; 
		} 
	t++; 
	} 
	return n;
} 
main() 
{
	int x=-1; 
	while(x<0) 
	{ 
		printf("Please input(x>0): ");
		scanf("%d",&x);
	}
	printf("\nThe result is: %d\n",fun(x));
}
