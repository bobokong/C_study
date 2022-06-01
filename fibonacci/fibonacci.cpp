#include<stdio.h>
main() 
{ 
	int f1=1,f2=1,n,s=0;  
	for(n=1;n<=15;n++) 
	{
		s=s+f1+f2;	
		f1=f1+f2; 
		f2=f2+f1; 
	} 
	printf("\n%d",s); 
} 
/*#include "stdio.h" 
main() 
{ 
 	long f[20]={1,1},i,sum=0;  
 	for(i=2;i<30;i++)  	 	
		f[i]=f[i-1]+f[i-2]; 
	printf("输出 Fibonacci 数列前 30 项和："); 
	for(i=0;i<30;i++)  	 	 	
		sum+=f[i]; 
 	printf("\nsum=%ld\n",sum); 
} 
*/