/*十、三（1）统计2的个数*/
#include "stdio.h" 
countdigit(long number,int a); 
main() 
{ 
 	long number;  	
	printf("Enter number:");  	
	scanf("%ld",&number); 
 	printf("%d\n",number); 
} 
countdigit(long number,int a)
{     	
	int n=0;  	
	while(number) 
 	{  
 	 	if(number%10==a) 
 	 	n++; 
 	 	number=number/10; 
 	} 
 	printf("n=%d",n); 
} 
