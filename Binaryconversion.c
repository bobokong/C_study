#include<stdio.h>
#define MAXCHAR 101
/************************���ַ�ת��������*************************/
int char_to_num(char ch);		
/************************������ת�����ַ�*************************/
char num_to_char(int num);		
/********************������ԭ����ɵ�10����***********************/
long source_to_decimal(char temp[],int source);	
/***********ʮ������ת����Ŀ����Ʋ������ַ�����ĳ���************/
int decimal_to_object(char temp[],long decimal_num,int object);
/***********************���ַ��������ӡ**************************/
void output(char temp[],int length);
void main()
{
/****source�洢ԭ���ƣ�object�洢Ŀ����ƣ�length�洢���鳤��*****/
	int source,object,length;
	long decimal_num;	//�洢ת�����ʮ������
	char temp[MAXCHAR];
	int flag=1;
	while(flag)
	{
		printf("ת��ǰ�����ǣ�");
		scanf("%s",temp);
		printf("ת��ǰ�����ƣ�");
		scanf("%d",&source);
		printf("ת��������ƣ�");
		scanf("%d",&object);
		printf("ת��������ǣ�");
		decimal_num=source_to_decimal(temp,source);
		length=decimal_to_object(temp,decimal_num,object);
		output(temp,length);
		printf("����������1����������0\n");
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
