#include<stdio.h>

int main()
{
    char n[20];int i;
    printf("Enter a String \n");
    scanf("%s",n);
    for( i=0; n[i]!='\0'; i++);
    
    
    for(int j=(5-1); j>=0; j--)
    {
        printf("%c",n[j]);
    }
    for(int j=5; j<=i; j++)
    {
        printf("%c",n[j]);
    }
 

return 0;
}