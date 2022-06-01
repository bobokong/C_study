#include "stdio.h"
main() 
{  /********found******/
struct student
{   
	char flag;                    
	float  t;             
};                  
    /********found********/ 
    struct student a={'a',46}; 
    printf("%c,%f\n",a.flag,a.t); 
} 
