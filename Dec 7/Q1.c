#include<stdio.h> 

int main()
{  
    int a[4][4],i,j,k,count=1; 
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
       {
        a[i][j]=count; 
        printf("%d\t",a[i][j]);
        count++;
       } 
       printf("\n");
    } 
    for(k=0;k<=3;k++)
   {
       for(i=k;i>=0;i--)
       {
           printf("%d\t",a[i][k-i]);
       } 
       printf("\n");
   }  
        count=4;
       for(k=3;k>=1;k--)
       {    
           i=3; 
         
            for(int p=1;p<=k;p++)
          {
           printf("%d\t",a[i][count-i]); 
           i--; 
          } 
          count++;
       printf("\n");
       }


    return 0; 
}