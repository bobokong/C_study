#include "stdio.h" 
long int jf (int n)                       
{ 
	int  i;   
	long int  t=1;   
	for(i=1; i<=n; i++)     
		t*=i;
	return t; 
} 
 
long int cmn(int m,int n)
{ 
return(jf(m)/(jf(n)*jf(m-n)));
} 
void main( ) 
{ 
int m,n;   
printf("please enter m and n: ");      
scanf("%d,%d",&m,&n );  
printf("%ld",cmn(m,n));  
} 
 