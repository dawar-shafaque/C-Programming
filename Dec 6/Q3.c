#include<stdio.h> 

int main()
{  
   int a[4][4],i,j; 
   int count=1;
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
   return 0;
}