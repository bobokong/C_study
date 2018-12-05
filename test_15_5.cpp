#include "stdio.h" 
double fun(int m) 
{ 
	float t=1.0;  
	int i;    
	for(i=2;i<=m;i++)
	t=t+1.0/i; 
	return t; 
} 
void main() 
{ 
	int m;     
	printf("\nPlease enter 1 integer number:");    
	scanf("%d",&m);  
	printf("%f",fun(m));
}    
 