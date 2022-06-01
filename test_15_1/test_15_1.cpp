#include<stdio.h>
int fun(int*a,int*b);
main()
{
	int a,b;
	printf("输入两个数\n");
	scanf("%d%d",&a,&b);
	printf("输出原数据\n");
	printf("a=%d,b=%d\n",a,b);
	fun(&a,&b);
	printf("输出改变后的数据\n");
	printf("a=%d,b=%d\n",a,b);
}
fun(int*a,int*b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
	return *a,*b;
}