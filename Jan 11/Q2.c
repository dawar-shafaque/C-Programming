#include<stdio.h> 
float maths(int a, int b);
int main()
{   
    int avg,max,min,a=10,b=6; 
    maths(10,6); 
    return 0;
} 
float maths(int a, int b) 
{
    int avg, max, min; 
    avg=(a+b)/2; 
    printf("avg: %d\n",avg);
    if(a>b)
    {
        max=a; 
        min=b;   
        printf("max is %d and min is %d",a,b); 
    } 
    else 
    {
        max=b;
        min=a; 
        printf("max is %d and min is %d",b,a);
    }
} 