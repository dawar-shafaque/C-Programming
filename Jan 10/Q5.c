#include<stdio.h>

void func(int m,int n,char c)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%c ",c);
        }

        printf("\n");
    }
}

int main()
{
    func(3,2,'-');
    printf("AB\n");
    func(6,3,'=');
    printf("DF\n");
    func(2,5,'*');

    return 0;
}