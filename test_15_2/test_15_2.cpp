#include<stdio.h> 
#include<string.h>
int fun(float  x[100],int *n) ;
int p;
void main() 
{ 
	float x[100]; 
	int i,num=0; 
	printf("��n��ֵ��\n"); 
	scanf("%d",&p); 
	for(i=0;i<p;i++) 
		scanf("%f",&x[i]); 
	fun(x,&num); 
	printf("\n����ƽ��ֵ��ʵ��������%d\n",num); 
} 
int fun(float  x[],int *n) 
{
	int i,b;
	float average,sum=0;	
	for(i=0;i<p;i++)  	 	
 	 	sum=sum+x[i]; 
		average=sum/p;
		printf("%f %f",sum,average);
		printf("\nsize=%d",sizeof(x)/sizeof(x[0]));
	for(i=0;i<p;i++)
		if(x[i]>=average)
		{
			*n+=1;
		}	
		return 0;
} 
