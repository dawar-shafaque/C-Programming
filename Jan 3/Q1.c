#include<stdio.h> 
int main()
{
    int *x,*y,t,a,b; 
    x=&a;
    y=&b;
    printf("Enter value of number 1: ");
    scanf("%d",&a);
    printf("Enter value of number 2: ");
    scanf("%d",&b);
     t   = *x;
    *x   = *y;
    *y   =  t;
    printf("After  Swapping: number 1 is: %d, number 2 is: %d\n",a,b);

    return 0; 
}