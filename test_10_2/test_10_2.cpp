#include<stdio.h> 
double fun(int m);
main() 
{   
	int m; 
	printf("Enter m:"); 
	scanf("%d",&m); 
	printf("The result is %lf\n",fun(m)); 
} 
double fun(int m) 
{ 
	double t=1.0; 
	int i; 
	for(i=2;i<=m;i++) 
	t+=-1.0/i; 
	return t; 
} 
