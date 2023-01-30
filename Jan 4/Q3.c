/*#include<stdio.h> 
int main()
{
    int a[8]={1,5,7,2,9,3,4,8},i; 
    int *p=&a[0];
    int *q=&a[5]; 
    for(i=1;i<5;i++)
    {
        p[i]=q[i+4]; 
    } 
    for(i=1;i<8;i++)
    {
        printf("%d %d",q[i+4],p[i]); 
    } 
    return 0; 
}*/ 
#include<stdio.h> 
int main()
{  
    int a[6],i; 
    int *p=&a[0]; 
    printf("enter the elements of the array\n"); 
    for(int i=0;i<6;i++)
    {
    scanf("%d",p+i); 
    
    }  
    printf("The elements of the array are: \n");
     for(i=0;i<6;i++)
    {
    printf("%d\t",*(p+i));
    }
    int *q=&a[3];
    for(i=0; i<3 ;i++)
    {
     *q=*(p+(3+i));
    printf("%d",*(q+i)); 
    }   
     for(i=0; i<3 ;i++) 
    {
        printf("%d",*(p+i)); 
    
    } 
    return 0; 
} 