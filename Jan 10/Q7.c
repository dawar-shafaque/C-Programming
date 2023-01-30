#include<stdio.h>

void pattern(int n,char c)
{
    printf("The desired output is:\n");
    
    int i,j;

    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c\t",c);
        }

        printf("\n");
    }
}

int main()
{
    int a;
    char p;
    printf("Enter an integer:\n");
    scanf("%d",&a);
    printf("Enter a character:\n");
    scanf(" %c",&p); 

    pattern(a,p);

    return 0;
}