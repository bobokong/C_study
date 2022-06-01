#include<stdio.h> 
int a, b; 
void f2( int x ) 
{ 
	int a;   
	a=3*x;  
	printf("in f2:a=%d\n",a); 
} 
void main( ) 
{   
	printf("in main¡ªbefore call f2: a=%d,b=%d\n",a,b);    
	f2(a+2);  
	printf("in main¡ªafter call f2: a=%d,b=%d\n",a,b);  
}