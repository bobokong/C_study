#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i=0;
	float a[10];
	for(i=0;i<10;i++)
	{
	a[i]=(rand()%10);
	printf("%f  ",a[i]);
	}
}