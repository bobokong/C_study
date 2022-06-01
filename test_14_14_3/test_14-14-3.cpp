#include "stdio.h"
#include<string.h> 
main() 
{   
int i=0,j=0;   
char a[80]; 
printf("给字符串赋值：\n"); 
gets(a); 
printf("输出原字符串：\n"); 
puts(a); 
while(a[i]=='*')i++;  
printf("%d",i); 
while(a[i])    
a[j++]=a[i++];   
a[j]=0;   
printf("输出新的字\n"); 
puts(a);  
} 
