#include<stdio.h>
int d=1; 
fun(int p) 
{ 
	int d=5; 
	d+=p++; 
	printf("%d ",d); 
} 
main( ) 
{ 
	int a=3;  
	fun(a);   
	{ 
	int d=16;  
	d+=a++;       
	printf("%d  ",d); 
	}     
	printf("%d  ",d); 
} 