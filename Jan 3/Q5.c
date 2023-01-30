#include<stdio.h> 

int main()
{  
    int a[5]; 
    int *p;
    p=&a[0]; 
    printf("enter the first element of the array"); 
    scanf("%d",p); 
    for(int i=1;i<5;i++)
    {   

        *p= *p + 2;
         printf("value of %d element is : %d\n",(i+1),*p);  
    } 
    return 0; 
}