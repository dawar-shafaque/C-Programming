#include <stdio.h>

int main()
{
   int i,j,k=1,m=1;
   int a[3][4];
   
   for(i=0;i<3;i++)
   {
       k=m;
       for(j=0;j<4;j++)
       {
           
           a[i][j]=k;
           printf("%d\t",a[i][j]);
           k+=3;
       }
       m++;
       printf("\n");
   }
    return 0;
}