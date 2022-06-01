#include<stdio.h>
void sat1(char a[]);
void dele(char a[]);
void main()
{
	char a[20];
	gets(a);
	puts(a);
	dele(a);
	sat1(a);
}
void sat1(char a[])
{
	int n=1,i;
	for(i=0;a[i]!='\0';i++)
		if(a[i]!=' '&&a[i+1]==' ')
		n++;
	printf("%d\n",n);
}
void dele(char a[])
{
	int i,j=0;
	char b[20];
	for(i=0;a[i]!='\0';i++)
		if(a[i]!='*')
		{
		b[j]=a[i];
		++j;
		}
		b[j++]=0;
	
	printf("%d\n",j);
	puts(b);
}
