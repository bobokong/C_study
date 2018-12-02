#include<stdio.h>
double  fac( int  n);  
void main( ) 
{ 
	int  n;  
	printf("Enter number:");   
	scanf("%d",&n);   
	printf("%.1f\n", fac(n)); 
} 
double  fac( int  n) 
{     
	if(n==1)
		return 1;
	else
		return n*fac(n-1);
}  
