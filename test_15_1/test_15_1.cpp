#include<stdio.h>
int fun(int*a,int*b);
main()
{
	int a,b;
	printf("����������\n");
	scanf("%d%d",&a,&b);
	printf("���ԭ����\n");
	printf("a=%d,b=%d\n",a,b);
	fun(&a,&b);
	printf("����ı�������\n");
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