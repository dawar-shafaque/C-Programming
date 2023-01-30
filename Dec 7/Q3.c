#include<stdio.h>

int main()
{
    int a[5][5],i,j,k,count=1;
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            a[i][j]=count;
            count++;
        }
        printf("\n");
    }

    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    int t=2;
    int sum=0;
    i=0,j=0;
    for(i=0; i<3; i++)
    {
        for(j=0; j<5; j++)
        {
            sum=i+j;
            if((sum)>=2 && sum<=t)
            {
                printf("%d\t",a[i][j]);
                
            }
            else
             printf("\t");
        }
        t=t+2;
        printf("\n");
       
    }
    t=4;
    for(i=3; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            sum=i+j;
            if((sum)<=6 && sum>=t)
            {
                printf("%d\t",a[i][j]);
                
            }
            else
            printf("\t");
        }
        t=t+2;
        printf("\n");
       
    }
    return 0;
}