#include "stdio.h" 
void fun(int m) 
{ 
	int aa[20],i,k=2;     
	for(i=0;m;i++) 
	{
		aa[i]=m%k; 
		m=m/k;
	}     
	printf("\n");     
	for(;i;i--)  
	printf("%d ",aa[i-1]);
} 
void main() 
{ 
	int n;     
	printf("\n ������һ��ʮ����������\n");  
	scanf("%d",&n);     
	fun(n); 
} 