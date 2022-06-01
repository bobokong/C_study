#include<stdio.h>
#include<string.h>
int lengthchars(char c);
main()
{
	char a1,a2,c1,c2;
	c1=gets();
	a1=lengthchars(c1);
	c2=gets();
	a2=lengthchars(c2);
	if(a1>a2)
	puts(c1);
	else
	puts(c2);
}
int lengthchars(char setence)
{
	char sentence[100];
	int i,num=0,word=0;
	char c;
	for(i=0;(c=sentence[i])!='\0';i++)
	if(c==' ')
	word=0;
	else if(word==0)
	{
	word=1;
	num++;
	}
	return num;
}
