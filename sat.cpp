#include<stdio.h>
void sat1(char a[]);		/*统计单词个数*/
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
	int i,j;
	j=0;
	char b[20];
	for(i=0;i!='\0';i++)
		if(a[i]!='*')
		{
			b[j]=a[i];
			j=j+1;
			printf("%d",j);
		}
	
	printf("%s",b);
}
