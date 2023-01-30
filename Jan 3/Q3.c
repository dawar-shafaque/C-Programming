#include<stdio.h> 

int main()
{  
    int a,b; 
    int *p,*q; 
    p=&a;
    q=&b;
    printf("enter the two values"); 
    scanf("%d %d",p,q); 
    printf("the two values are %d and %d",*p,*q);
    
    return 0; 
}