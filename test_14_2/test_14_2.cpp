#include "stdio.h" 
main() 
{   
	char a[80],b[80];   
	int i,j; 
	printf("���ַ�����ֵ��\n"); 
	gets(a); 
	gets(b);
	for(i=0;a[i]!='#';i++);  
	for(j=0;b[j]!='#';j++);  
		printf("�ַ�������a=%d  b=%d\n",i,j); 
	if(i>j)
		puts(a);
	else
		puts(b); 
} 
