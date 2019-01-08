#include<stdio.h>
void fun(int n);
main()
{
	int grade;
	printf("enter grade:\n");
	scanf("%d",&grade);
	fun(grade);
}
void fun(int n)
{
	if(n>=90)
		printf("A");
	else if(n>=80)
		printf("B");
	else if(n>=60)
		printf("C");
	else
		printf("D");
}
