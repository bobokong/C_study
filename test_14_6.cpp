#include<stdio.h>
f(int a);
main()
{ 
	int a=2,i;
	for(i=0;i<3;i++) 
		printf("%4d",f(a));
}
f(int a) 
{ 
	int b=0;
	static int c=3; /*c3�Ǿ�̬�ֲ�������ֻ�ڱ��������״ε���ʱ��ִ�д˳�ʼ�����*/
	b++; c++; /*��2�ε���ʱ�����ֵ�1���뿪ʱ��ֲ*/
	return(a+b+c);
}
