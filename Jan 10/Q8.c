#include<stdio.h> 
int fib(int n) 
{
    if(n==1)
    {
        return n;
    } 
    else if(n==2)
    {
        return n-1;
    }
    
    else 
    {
        return fib(n-1)+fib(n-2);
    }
} 
int main()
{
    int no; 
    printf("enter the index of fibonacci series at which you need the value");
    scanf("%d",&no); 
    printf("%d",fib(no));
    return 0;
}