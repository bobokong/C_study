#include<stdio.h>
int dividor(int a,int b);		/*求最大公约数*/
int  f(int m,int n)		/*求最大公约数*/
{
	if(m%n == 0)
		return n;
	else
		return f(n,m%n);
}
int main(){
	int p = 0,m = 0,n = 0;
	printf("请按照由大到小的顺序输入两个整数,用空格隔开:\n");
	scanf("%d%d",&m,&n);
	p = f(m,n);
	printf("两个数的最大公约数是:%d\n",p);
	dividor(m,n);
	printf("两个数的最大公约数是:%d\n",p);
	return 0;
}
int dividor(int a,int b)
{
	int r;
	r=a%b;
	while(r)
	{
		a=b;b=r;r=a%b;
	}
	return b;
} 