#include<stdio.h>
#include<string.h>
main()
{
	char sentence[100];
	int i,num=0,word=0;
	char c;
	gets(sentence);
	for(i=0;(c=sentence[i])!='\0';i++)
	if(c==' ')
	word=0;
	else if(word==0)
	{
	word=1;
	num++;
	}
	printf("There are %d words\n",num);
}
