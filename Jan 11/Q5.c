#include<stdio.h> 
int copy(int *p, int *q)
{   
    int i,a[5],b[5];

    for(i=0;i<5;i++)
    {   
         *(q+i)=*(p+i); 
         printf("%d",*(q+i));
    }  
}
int main()
{   
    int a[5]={1,2,3,4,5},b[5],i,z; 
     printf("The elements in the second array is:"); 
     copy(a,b);
    return 0; 
}