#include<stdio.h>
#include<math.h>
int fun(float x[],int *n)
{
	float sum=0.0,aver;
	int j=0;
	for (j=0;j<100;j++)
		if(x[j]!='\0')
			sum=sum+x[j];
		aver=sum/j;
	printf("%d",aver);
	for(j=0;j<100;j++)
	if(x[j]>=aver)
	*n++;
	return aver;
}
void main()
{
	float x[100];
	int n,i,num=0;
	printf("¸øn¸³Öµ\n");
	scanf("%d",&n);
	for (i = 0; i < n; i++)
		scanf("%f",x[i]);
	fun(x,&num);
	printf("\n,¸ßÓÚÆ½¾ùÖµµÄÊµÊý¸öÊýÊÇ%d\n",num);
}