/*********����1************/
#include<stdio.h>
void swap1(int c[])   
{   
	int t; 
	t=c[0];
	c[0]=c[1];
	c[1]=t; 
} 
main( ) 
{  
	int a[2]={3,5}; 
	swap1(a) ; 
	printf("\n %5d %5d\n ",a[0],a[1]); 
} 
/*������ʵ������һ����ַ�������൱�ڰѵ�ַ�����˽�ȥ,��������Ϊ�����Ĳ���ʱ,ʵ��������β����鹲����ͬ���ڴ浥Ԫ��*/
 
/**********����2*********** 
#include<stdio.h>
void swap1(int c0,int c1)  
{ 
	int t; t=c0;
	c0=c1;c1=t; 
} 
main( ) 
{  
	int a[2]={3,5}; 
	swap1(a[0],a[1]); 
	printf("%5d %5d \n",a[0],a[1]); 
} */
