#include<stdio.h> 
int sum(int a, int b)
{
    return a+b;
} 
void swap(int *c, int *d)
{
    int temp; 
    temp=*c;
    *c=*d; 
    *d=temp; 
} 
int main()
{   
    int a=4,b=7; 
    printf("the value of a+b is %d\n",sum(a,b));  
    int x=3,y=4; 
    swap(&x,&y); 
    printf("the value of x is %d and value of y is %d",x,y);
    return 0;
} 