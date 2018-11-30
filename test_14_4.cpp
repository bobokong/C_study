#include<stdio.h>
void convert(int n);
main()
{
	int number;
	printf("enter an integer: ");
	scanf("%d",&number);
	printf("output: ");
	if(number<0)
	{
	putchar('-');putchar(' ');
	number=-number;
	}
	convert(number);
	printf("\n");
	return 0;
}
void convert(int n)
{
	int i;
	if((i=n/10)!=0)
	convert(i);
	putchar(n%10+'0');
	putchar(32);
}
