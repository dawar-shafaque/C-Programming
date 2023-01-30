#include<stdio.h>

int main()
{
    int a[4][4],temp= 0,i,j;

    for(i=0; i<4; i++)
    {
        printf("Enter the Elements of Row %d \n",(i+1));
        for(j=0; j<4; j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
   

     printf("Original Array \n");
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
    
    for(i=1; i<4; i++)
    {
       
        for(j=0; j<i; j++)
        {
            temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
        printf("\n");
    }

    
    
    
    printf("Transpose Array \n");
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}