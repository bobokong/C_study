#include "stdio.h"   
#include "string.h"   
void fun(char str1[ ],char str2[ ])   
{ 
	int i,j; 
	j=0; 
	for(i=0;i<strlen(str1);i+=2) 
	{ 
		str2[j]=str1[i]; 
		j++; 
	} 
	str2[j]='\0'; 
}  
void main() 
{ 
	char str1[80]="This Is a c Program",str2[80];      
	printf("String is: %s\n",str1);
	fun(str1,str2);     
	printf("Result is: %s\n",str2);   
} 
 