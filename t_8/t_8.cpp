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
	printf("%d",t1);		//������������в�����0
	t2/=10;
	t1=t2%10;
	}
	printf(" ");
	t1=b%10;
	t2=b;
	while(t1)
	{
	printf("%d",t1);		//������������в�����0
	t2/=10;
	t1=t2%10;
	}
	printf("\n");
	printf("%d\n",divisor(a,b));
}
int divisor(int a,int b)	//������Լ��
{
	int r;
	r=a%b;
	while(r)
	{
	a=b;b=r;r=a%b;
	}
	return b;
}