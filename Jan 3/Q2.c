#include<stdio.h> 

int main()
{  
    int a[3]; 
    int *p=&a[2]; 
        printf("enter third element of the array\n"); 
        scanf("%d",p);  
        printf("third element of the array is %d\n",*p);
    for(int i=1;i>=0;i--)
    {
        *p=*p-2; 
        printf("The element number %d is : %d\n",(i+1),*p); 
    }   
    
    return 0; 
} 
/*for(int i=1;i>=0;i--)
    {
        *p=*p-2; 
        printf("The element number %d is : %d\n",(i+1),*p); 
    }  */ 