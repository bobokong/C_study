#include<stdio.h>
int dividor(int a,int b);		/*�����Լ��*/
int  f(int m,int n)		/*�����Լ��*/
{
	if(m%n == 0)
		return n;
	else
		return f(n,m%n);
}
int main(){
	int p = 0,m = 0,n = 0;
	printf("�밴���ɴ�С��˳��������������,�ÿո����:\n");
	scanf("%d%d",&m,&n);
	p = f(m,n);
	printf("�����������Լ����:%d\n",p);
	dividor(m,n);
	printf("�����������Լ����:%d\n",p);
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