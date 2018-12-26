#include<stdio.h>
#define N  4 
struct st 
{  
	int bh;    
	char name[10]; 
	float jbgz,zwgz; 
}; 
main() 
{   
	int i,k=0; 
	float sum=1e+10; 
	struct st ps[N]; 
	for(i=0;i<N;i++) 
	{  
		scanf("%d %s %f %f",&ps[i].bh,&ps[i].name,&ps[i].jbgz,&ps[i].zwgz);   
		if(ps[i].jbgz+ps[i].zwgz<sum)
  	{ 
  		sum=ps[i].jbgz+ps[i].zwgz;  
  		k=i;
  	} 
} 
	printf("%s\n",ps[k].name);
} 
