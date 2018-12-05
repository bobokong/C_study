#include "conio.h"   
#include "stdio.h"   
int arrsum( int arr[4][4])   
{ 
	int i,j,sum;     
	sum=0;       
	for( i=0;i<4;i++)        
	for(j=i+1;j<4;j++)        
	sum+=arr[i][j];      
	return (sum);   
}   
void  main()   
{ 
	int a[4][4]={4,4,34,37,7,3,12,8,5,6,5,52,24,23,2,10},i,j;     
	printf("The max is: %d\n",arrsum(a));
}
