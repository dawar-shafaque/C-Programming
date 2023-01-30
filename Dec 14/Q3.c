#include<stdio.h> 

int main()
{  
    char a[30]; 
    int i;
    printf("enter the string");
    scanf("%[^\n]s",a); 
    i=0;
    while(a[i]!='\0')
    {   
        i++;
    }
        printf("%d",i+1); 
    
    return 0; 
}