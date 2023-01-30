#include<stdio.h> 

int main()
{  
   int a[3][4],i,j,s=1; 
   int count=1;
    for(i=0;i<3;i++)
   {   count=s;
       for(j=0;j<4;j++) 
       { 
           a[i][j]=count; 
       printf("%d\t",a[i][j]);
       count+=3; 
       } 
       s++;
       printf("\n");
   } 
   return 0;
}