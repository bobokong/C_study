#include "stdio.h" 
int fun(char a[]) 
{/***************begin****************/  
	int i,j;
	char t;    
	for(i=0;i<7;i++)     
		for(j=1;j<6-i;j++)      
			if(a[j]>a[j+1]) 
 	 	   {  	 	 	   
 	 	   		t=a[j];  	 	 	   
 	 	   		a[j]=a[j+1];  	 	 	   
 	 	   		a[j+1]=t;  	 	   
 	 	   }   
	return 0;
/***************end******************/ 
} 
main() 
{   
	char a[80];      
	printf("please input a :");    
	gets(a);
	printf("输出原数组元素:\n");   
	puts(a);
	fun(a);
	printf("输出排好序的数组元素:\n");    
	puts(a);
} 
