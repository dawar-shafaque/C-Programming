#include<stdio.h> 
int main()
{  
    int a[5]={1,2,3,4,5}; 
    int *p; 
    p=&a[5];
     for(int i=1;i<=5;++i) 
    {
    printf("%d",*(p-i));
    }
    return 0; 
}