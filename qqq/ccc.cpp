#include<stdio.h>
main()
{
	static int a;
	a=5;
	{
	static int b=2;
	}
	a=49;
	printf("%d",b);
}
