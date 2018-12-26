#include<stdio.h>
int main() 
{    
	int i,n;    
struct emp 
{   
   	char name[10];      
    float jbg;      
    float fdg;     
   	float zc; 
 }s[10]; 
 	printf("n="); 
 	scanf("%d",&n); 
 	for(i=0;i<n;i++) 
       scanf("%s%f%f%f",s[i].name,&s[i].jbg,&s[i].fdg,&s[i].zc); 
   	for(i=0;i<n;i++) 
   /********found********/  
   		printf("%5s,Êµ·¢¹¤×Ê£º%7.2f\n",s[i].name,s[i].jbg+s[i].fdg-s[i].zc); 
} 
