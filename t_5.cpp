#include<stdio.h>
void fun(char *s)
{
	int i,j=0,k=0; char t1[80],t2[80];
	for(i=0;s[i]!='\0';i++)
		if (s[i]>='0'&&s[i]<='9')
		{
			t2[j]=s[i]; j++;
		}
		else t1[k++]=s[i];
		t2[j]=0; t1[k]=0;
		for(i=0;i<k;i++)
			s[i]=t1[i];
		for(i=0;i<j;i++)
			s[i+k]=t2[i];
}
main()
{
	char s[80]="ba3a54j7sd567sdffs";
	printf("orial :%s\n",s );
	fun(s);
	printf("now :%s\n",s);
}