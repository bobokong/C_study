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
	static int c=3; /*c3是静态局部变量，只在本函数被首次调用时，执行此初始化语句*/
	b++; c++; /*第2次调用时，保持第1次离开时的植*/
	return(a+b+c);
}
