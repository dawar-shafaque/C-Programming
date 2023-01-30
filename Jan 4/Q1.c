#include<stdio.h> 
int main()
{
    int a[5]={1,5,7,2,9},i; 
    int *p=&a[i]; 
    printf("The array is :\n");
    for(i=0;i<5;i++)
    {
        printf("%d",*p); 
        p++;
    }
    return 0; 
}