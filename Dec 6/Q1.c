#include<stdio.h>

int main()
{

    int A[10];
    int t=1,k=0;
    for(int i=1; i<=4; i++)
    { 
        t=1;
        for(int j=1; j<=i; j++)
        {
            A[k]=t;
            t++;
            k++;
        }
    }
    printf("Array is \n");
   for(int a=0; a<10; a++)
    {
        
        printf("%d",A[a]);
    }
    return 0;
}