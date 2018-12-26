#include<stdio.h>
#include<math.h>
int fun(float x[],int *n)
{
	float sum=0,aver=0,m=0;
	int j,*p;
	p=n;
	for (j=0;j<5;j++)
		sum+=x[j];
		aver=sum/5;
	printf("\n%.2f %.2f",sum,aver);
	j=0;
	for(j=0;j<5;j++)
	if(*(p+j)>=aver)
	*p++;
	return *p;
}
void main()
{
	float x[100];
	int n,i,num=0;
	printf("给n赋值：\n");
	scanf("%d",&n);
	for (i = 0; i < n; i++)
		scanf("%f",&x[i]);
	fun(x,&num);
	printf("\n高于平均值的实数个数是%d\n",num);
}
