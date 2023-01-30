#include<stdio.h>

void operator(int x,int y,char c)
{
    int a;
    switch (c)
    {
    case '+':
        a=x+y;
        printf("The sum of %d and %d is %d",x,y,a);
        break;

    case '-':
        a=x-y;
        printf("The result of the subtraction of %d from %d is %d",y,x,a);
        break;

    case '*':
        a=x*y;
        printf("The multiplication of %d and %d is %d",x,y,a);
        break;
    
    case '/':
        a=x/y;
        printf("The quotient of the division of %d by %d is %d",x,y,a);
        break;

    case '%':
        a=x%y;
        printf("The remainder of the division of %d by %d is %d",x,y,a);
        break;

    default:
        printf("Wrong choice!");
        break;
    }

}

int main()
{
    int a,b;
    char d;
    printf("Enter two numbers:\n");
    scanf("%d %d",&a,&b);
    printf("Enter the character of the operator\n");
    printf("(+ for addition\n, - for subtractiion\n, * for multiplication,\n");
    printf("/ for division or finding quotient\n, %% for finding remainder):\n");
    scanf(" %c",&d); 

    operator(a,b,d);

    return 0;
}