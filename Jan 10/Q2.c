#include<stdio.h>

int factorial(int n)
{
    int product=1;
    while(n>=1)
    {
        product=product*n;
        n=n-1;
    }

    return product;
}

int main()
{
    int no;
    double sum,sum1,sum2;
    int f;
    sum1=0;
    sum2=0;
    printf("Enter a number:\n");
    scanf("%d",&no);

    for(int i=1;i<=no;i=i+2)
    {
        f=factorial(i);
        sum1=sum1+(1.0/f);
    }

    for(int j=2;j<=no;j=j+2)
    {
        f=factorial(j);
        sum2=sum2+(f/1);
    }

    sum=sum1+sum2;

    printf("The sum of the series 1/1! + 2!/1 + 1/3! + 4!/1 .... upto entered number %d is %lf",no,sum);

    return 0;
}