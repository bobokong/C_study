#include "stdio.h" 
struct student 
{ 
 	char num[15];  	 	
 	char name[15];  	 	
 	float addr[15]; 
}; 
main() 
{  	
	struct student a[3];  	
	int i;  	
	printf("输入学生信息：\n");  
	for(i=0;i<5;i++) 
 	{ 
 		scanf("%s%s%s",a[i].name,a[i].num,a[i].addr);
 	} 
 	printf("全部学生通讯信息:\n"); 
 	printf("姓名 			   电话	  	           地址\n"); 
 	printf("----------------------------------------------------\n");
 	for(i=0;i<5;i++) 	
 	printf("%-15s %-15s %-15s\n",a[i].name,a[i].num,a[i].addr);
 	printf("----------------------------------------------------\n"); 
} 
