#include "stdio.h"
#include<string.h> 
main() 
{   
int i=0,j=0;   
char a[80]; 
printf("���ַ�����ֵ��\n"); 
gets(a); 
printf("���ԭ�ַ�����\n"); 
puts(a); 
while(a[i]=='*')i++;  
printf("%d",i); 
while(a[i])    
a[j++]=a[i++];   
a[j]=0;   
printf("����µ���\n"); 
puts(a);  
} 
