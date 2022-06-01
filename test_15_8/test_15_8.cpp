#include<stdio.h>
#include "conio.h"
int fun(int x[]);
main()
{
	int a[20]={1,4,2,7,3,12,5,34,5,9};
	fun(a);
}
int fun(int x[])
{
	int max,position,i;
	max=x[0];
	for(i=0;i<20;i++)
		if(x[i]>max)
		{
			max=x[i];
			position=i;	
		}
	printf("the max is: %d position is: %d",max,position);
	return 0;
}
/*
#include "conio.h"   
#include "stdio.h"   
int max;  
int fun( int arr[ ],int n )   
{ 
	int pos,i;     
	max = arr[0];     
	pos = 0;     
	for( i=1; i<n; i++)       
	if (max < arr[i])       
	{ 
	max = arr[i]; 
	pos=i; 
	}     
	return pos;   
}   
void main( )   
{ 
	int a[10]={1,4,2,7,3,12,5,34,5,9},n;
	n=fun(a,10);
	printf("The max is: %d ,pos is: %d\n", max , n);   
}*/