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
	printf("输入学生信息：\n"); 
 	scanf("%s%s%f",a.num,a.name,&a.score);  	
 	printf("%s学生成绩单:\n",a.name);  	
 	if(fun(a)) 
 	{ 
 	 	printf("%s   %s  %f\n",a.num,a.name,a.score);  	 	
 	 	printf("成绩不错祝贺你!!\n"); 
 	} 
 	else 
 	{ 
 	 	printf("%s   %s  %f\n",a.num,a.name,a.score);  	 	
 	 	printf("需要继续努力!!\n"); 
 	} 
} 
