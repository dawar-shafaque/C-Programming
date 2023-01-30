#include<stdio.h> 
int max(int a[5])
{   
    int i;
    printf("enter the elements of the array");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]); 
    }  
    printf("The array is:"); 
    for(i=0;i<5;i++)
    {
        printf("%d",a[i]); 
    } 
    int max=a[0]; 
    for(i=0;i<5;i++)
    {
    if(a[i]>max) 
    max=a[i]; 
    } 
      return max;
} 
int main()
{   
    int a[5],c; 
    c= max(a); 
    printf("max: %d",c);
    return 0;
}