#include<stdio.h>

int main()
{
    int a[4][4],b[4][4],c[4][4],i,j;

    for(i=0; i<4; i++)
    {
        printf(" Row %d \n",(i+1));
        for(j=0; j<4; j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<4; i++)
    {
        printf(" Row %d \n",(i+1));
        for(j=0; j<4; j++)
        {
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            c[i][j]=a[i][j]-b[i][j];
        }
    }



     printf("Array One \n");
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    
    printf("Array Two \n");
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d",b[i][j]);
        }
        printf("\n");
    }
    
    printf("subtraction \n");
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}