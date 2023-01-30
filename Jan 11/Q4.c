#include<stdio.h> 
int arr(int a[6])
{   
    int i;

    for(i=0;i<6;i++)
    {   
         if(i==3)
         {
             continue;
         } 
         else
         {
             a[i]+=a[3];  
         }
    }   
    for(i=0;i<6;i++)
    {
        printf("%d\t",a[i]);
    }
}
int main()
{   
    int a[6]={1,2,3,4,5,6},i,z;  
    arr(a);
    return 0; 
}