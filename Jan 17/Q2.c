#include<stdio.h> 
int even(int n)
{   
    if(n>0)
    printf("%d\n",n); 
    even(n-2);
}
int main()
{   
    
    printf("%d",even(10));
    return 0;
} 