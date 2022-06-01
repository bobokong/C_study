#include<stdio.h>
int fun(int);
main()
{
	int num1,num2;
	scanf("%d%d",&num1,&num2);
	if(num1>0&&num2<=1000)
		for(;num1<=num2;num1++)
			fun(num1);
	else printf("wrong\n");
}
int fun(int num1)
{	
	int sum=0,num2=num1;
	int f[10],j;
	f[0]=1;
	for(j=0;num2>0;j++)
	{
		f[j]=num2%10;
		sum+=f[j]*f[j]*f[j];
		num2=num2/10;
	}
	if(num1==sum)
		printf("%d ",sum);
	return 1;
}
