/*********程序1************/
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
/*数组名实际上是一个地址，所以相当于把地址传递了进去,数组名作为函数的参数时,实参数组和形参数组共用相同的内存单元。*/
 
/**********程序2*********** 
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
