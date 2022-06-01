#include<stdio.h>
#include<string.h>
#define N 40
int max(int x,int y)
{
	return(x>y? x:y);
}
main()
{
	int i=0,len1,len2,max2;
	char *point_1,*point_2,*max1,a[N],b[N];
	gets(a);
	gets(b);
	len1=strlen(a);
	len2=strlen(b);
	max2=max(len1,len2);
	printf("length a=%d b=%d\nlen_max=%d\n",len1,len2,max2);
	for(i=0;i<max2;i++)
		printf("%c %c\n",a[i],b[i]);
		for(i=len1;N>i>len1-1;i++)
		a[i]=0;
		for(i=len2;N>i>len2-1;i++)
		b[i]=0;
	for(i=0;i<max2;i++)
	{
		point_1=&a[i];point_2=&b[i];
		if(*point_1<*point_2)
		{
			max1=point_2;point_2=point_1;point_1=max1;
		}
		printf("now %c %c\n",*point_1,*point_2);
	}
	return 0;
}