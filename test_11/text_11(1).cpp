#include <stdio.h> 
double fun(int n) 
{ 
	int f=1,i=1;
	double sum=0.0;
	for(i=1;i<=n;i++)
	{
		sum+=f*(1.0/(2*i-1)-1.0/(2*i));
		f=-f;
	}	
	return sum;
} 
main() 
{  
 	int  n;  
 	double  s; 
 	printf("\nInput n:  ");   	
	scanf("%d",&n);  	
	s=fun(n); 
 	printf("\ns=%f\n",s); 
}
