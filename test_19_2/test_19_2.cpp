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
	printf("����ѧ����Ϣ��\n");  
	for(i=0;i<5;i++) 
 	{ 
 		scanf("%s%s%s",a[i].name,a[i].num,a[i].addr);
 	} 
 	printf("ȫ��ѧ��ͨѶ��Ϣ:\n"); 
 	printf("���� 			   �绰	  	           ��ַ\n"); 
 	printf("----------------------------------------------------\n");
 	for(i=0;i<5;i++) 	
 	printf("%-15s %-15s %-15s\n",a[i].name,a[i].num,a[i].addr);
 	printf("----------------------------------------------------\n"); 
} 
