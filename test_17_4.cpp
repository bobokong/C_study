#include <stdio.h> 
#include <ctype.h> 
#include <string.h> 
char *fun(char *str1,char *str2) 
{  
     if(strcmp(str1,str2)>0)
	 return str1;
	 else
	 return str2;
}  
main( ) 
{  
	char str1[81],str2[81];     
	printf("Input two string:");     
	gets(str1);  gets(str2);     
	printf("��������ַ���:\n");  
	puts(str1);  
	puts(str2);     
	printf("�������ַ���:%s\n",fun(str1,str2)); 
} 
