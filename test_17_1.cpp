#include  <stdio.h> 
int fun(float  x[],int *n,int len) 
{
	float average=0;
	int i,j=0;
	for(i=0;i<len;i++)
		average+=x[i]/len;
	printf("\n%f",average);
	for(i=0;i<len;i++)
		if(x[i]>=average)
		(*n)++;
	
	return 0;
} 
void main() 
{ 
	float x[100]; 
	int n,i,num=0,len; 
	printf("给n赋值：\n"); 
	scanf("%d",&n); 
	len=n;
	for(i=0;i<n;i++) 
		scanf("%f",&x[i]); 
	fun(x,&num,len); 
	printf("\n高于平均值的实数个数是%d\n",num); 
} 

