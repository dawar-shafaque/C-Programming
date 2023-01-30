#include<stdio.h>

int main()
{
    int a[4][4],b[4][4],c[4][4],i,j;

    for(i=0; i<4; i++)
    {
        printf("Row %d \n",(i+1));
        for(j=0; j<4; j++)
        {
            scanf("%d\t",&a[i][j]);
        }
        printf("\n");
    }
     printf("Matrix \n");
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}