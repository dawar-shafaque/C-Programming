#include<stdio.h> 

int main()
{  
    int a,b,c;  
    int *p=&a; 
    int *q=&b; 
    int *r=&c; 
    printf("enter the values\n");
    scanf("%d %d %d",p,q,r); 
    if(*p>*q)
    {
        if(*p>*r)
        {
            printf("%d is max number\n",*p); 
        } 
        else
        {
            printf("%d is max number\n",*r);
        } 
    } 
    else 
    {
        if(*q>*r)
        {
            printf("%d is max number\n",*q);  
        } 
        else 
        {
             printf("%d is max number\n",*r); 
        }
    }  
      if(*p<*q)
    {
        if(*p<*r)
        {
            printf("%d is min number\n",*p); 
        } 
        else
        {
            printf("%d is min number\n",*r);
        } 
    } 
    else 
    {
        if(*q<*r)
        {
            printf("%d is min number\n",*q);  
        } 
        else 
        {
             printf("%d is min number\n",*r); 
        }
    }  
    return 0; 
}