#include "stdio.h" 
struct student 
{ 
	char num[10];  	 	
	char name[10];  	 	
  	float score; 
}; 
int fun(struct student a) 
{ 
 	int b;
	b=a.score>60;
	return b;
}  
main() 
{  	
	struct student a;  	
	printf("����ѧ����Ϣ��\n"); 
 	scanf("%s%s%f",a.num,a.name,&a.score);  	
 	printf("%sѧ���ɼ���:\n",a.name);  	
 	if(fun(a)) 
 	{ 
 	 	printf("%s   %s  %f\n",a.num,a.name,a.score);  	 	
 	 	printf("�ɼ�����ף����!!\n"); 
 	} 
 	else 
 	{ 
 	 	printf("%s   %s  %f\n",a.num,a.name,a.score);  	 	
 	 	printf("��Ҫ����Ŭ��!!\n"); 
 	} 
} 
