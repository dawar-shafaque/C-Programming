#include<stdio.h> 

int main()
{  
    int a[3][4],i,j,count=1,turn=0;
    for(i=2;i>=0;i--)
    {
        if(turn==0)
        {
            for(j=3;j>=0;j--) 
            {
                a[i][j]=count++;
            }
        } 
        else
        {
            for(j=0;j<=3;j++)
            {
                a[i][j]=count++;
            }
        }
        turn=(turn+1)%2;
    } 
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n"); 
    } 
    return 0;
}