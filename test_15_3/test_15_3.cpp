 #include "stdio.h"   
 void main( )     
 { 
	long int  
	fact(long x,long n) ;             
	long int  x ; 
	long int  n;       
	printf("please enter X and  N(>=0): ");       
	scanf("%ld,%ld",&x,&n );       
	printf("%ld,%ld=%ld",x,n,fact(x,n));  
}  
 
long int  fact(long int x, long int n)       
{ 
	long int i,s; 
	s=1;                       
	if (n==0)  
		return 0; 
	for(i=1; i<=n;i++)                 
	s=s*x;                  
	return s;            
}