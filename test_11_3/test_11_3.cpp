#include<stdio.h>
fun(int x) 
{ 
 	if(x%2)  	 	
		return 1;  	
	else   	 	
		return 0; 
} 
main() 
{ 
 	int x,sum=0;  	
	printf("Enter x:"); 
	scanf("%d",&x); 
	while(x>0) 
	{ 
	 if(fun(x)==0) 
	  	sum+=x;     	 	
	 scanf("%d",&x); 
 	} 
 	printf("sum=%d\n",sum); 
} 
