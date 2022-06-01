#include<stdio.h>
main()
{
	char s[]="012xy\08";
	int i,n=0;
	for(i=0;s[i]!=0;i++)
	if(s[i]>='0'&&s[i]<='9')
	n++;
	printf("%d",n);
}
