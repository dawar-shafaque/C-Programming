#include<stdio.h> 
int fib(int no) 
{
    int a,i,b,d=0,c=1; 
    printf("%d\t",c); 
    for(i=1;i<no;i++)
    {
        b=d+c;
        printf("%d\t",b);
        d=c;
        c=b;
    } 
    }
int main()
{
    int no; 
    printf("enter the index to get the fibonacci series");
    scanf("%d",&no); 
    fib(no);
    return 0;
}