#include<stdio.h> 
int number(int n)
{   
    if(n)
    number(n-1); 
    else 
    return;
    printf("%d\n",n);
}
int main()
{   

    number(10);
    return 0;
} 