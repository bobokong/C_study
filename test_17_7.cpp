#include "stdio.h" 
#include <string.h> 
/********found********/  
void fun(char *s, char *t) 
{ 
/********found********/  	
	strcpy(s,t);
} 
main() 
{ 
 	char s[100],t[100];  	
	printf("\nPlease enter string S:");  	
	scanf("%s%s",s,t);  	
	fun(s,t); 
 	printf("\nThe result is : %s\n",s); 
} 
