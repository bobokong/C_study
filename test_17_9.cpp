#include <stdio.h> 
#include <ctype.h> 
void fun (char *str) 
{ 
	int i,j=0; 
	for(i=0;str[i]!='\0';i++) 
		if(str[i]!=' ')
			str[j++]=str[i]; 
	str[j]='\0'; 
}  
main( )  
{  
	char str[81];     
	printf("Input a string:");     
	gets(str);     
	puts(str);     
	fun(str);     
	printf("***str:%s\n",str); 
} 

