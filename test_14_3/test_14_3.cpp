#include<stdio.h>
#include<string.h>
char fun(char a);
main()
{
   int i,j=0;   char a[80]; 
	printf("���ַ�����ֵ��\n"); 
	gets(a); 
	i=strlen(a);j=i;
	while(a[i]=='*')
	{j=j-1;
	i=i-1;}
	printf("%d",j); 
}