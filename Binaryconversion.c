#include<stdio.h>
#define MAXCHAR 101
/************************将字符转换成数字*************************/
int char_to_num(char ch);		
/************************将数字转换成字符*************************/
char num_to_char(int num);		
/********************返回由原数组成的10进制***********************/
long source_to_decimal(char temp[],int source);	
/***********十进制数转换成目标进制并返回字符数组的长度************/
int decimal_to_object(char temp[],long decimal_num,int object);
/***********************将字符串逆序打印**************************/
void output(char temp[],int length);
void main()
{
/****source存储原进制，object存储目标进制，length存储数组长度*****/
	int source,object,length;
	long decimal_num;	//存储转换后的十进制数
	char temp[MAXCHAR];
	int flag=1;
	while(flag)
	{
		printf("转换前的数是：");
		scanf("%s",temp);
		printf("转换前的数制：");
		scanf("%d",&source);
		printf("转换后的数制：");
		scanf("%d",&object);
		printf("转换后的数是：");
		decimal_num=source_to_decimal(temp,source);
		length=decimal_to_object(temp,decimal_num,object);
		output(temp,length);
		printf("继续请输入1，否则输入0\n");
		scanf("%d",&flag);
	}
}
int char_to_num(char ch)
{
	if(ch>='0'&&ch<='9')
		return ch-'0';
	else if(ch<='f'&&ch>='a')
		return ch-'a'+10;
	else
		return ch-'A'+10;
}
char num_to_char(int num)
{
	if(num>=0&&num<=9)
		return (char)('0'+num);
	else if(num<='F'-'A'+10&&num>='A'-'A'+10)
		return (char)('A'+num-10);
	else
		return (char)('a'+num-10);	
}
long source_to_decimal(char temp[],int source)
{
	long decimal_num=0;
	int i,length;
	for(i=0;temp[i]!='\0';i++);
		length=i;
	for(i=0;i<length;i++)
		decimal_num=decimal_num*source+char_to_num(temp[i]);
	return decimal_num;
}
int decimal_to_object(char temp[],long decimal_num,int object)
{
	int i=0;
	while(decimal_num)
	{
		temp[i]=num_to_char(decimal_num%object);
		decimal_num=decimal_num/object;
		i++;
	}
	temp[i]='\0';
	return i;
}
void output(char temp[],int length)
{
	int i;
	for(i=length;i>=0;i--)
		printf("%c",temp[i]);
	printf("\n");
}
