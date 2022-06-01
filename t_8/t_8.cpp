#include<stdio.h>
#include<math.h>
int divisor(int a,int b);
void main()
{
	int a,t1,t2,b;
	scanf("%d%d",&a,&b);
	t1=a%10;
	t2=a;
	while(t1)
	{
	printf("%d",t1);		//逆序输出，其中不能有0
	t2/=10;
	t1=t2%10;
	}
	printf(" ");
	t1=b%10;
	t2=b;
	while(t1)
	{
	printf("%d",t1);		//逆序输出，其中不能有0
	t2/=10;
	t1=t2%10;
	}
	printf("\n");
	printf("%d\n",divisor(a,b));
}
int divisor(int a,int b)	//输出最大公约数
{
	int r;
	r=a%b;
	while(r)
	{
	a=b;b=r;r=a%b;
	}
	return b;
}