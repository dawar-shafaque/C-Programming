#include<stdio.h> 

int main()
{  
   int a[4][5],i,j,sum=0; 
   printf("enter values of array");
   scanf("%d",&a[i][j]);
   for(i=0;i<4;i++)
   {
       sum=0;
       for(j=0;j<5;j++)
       {
           sum=sum+a[i][j];
       } 
       printf("%d",sum);
   } 
   
   

    return 0; 
}