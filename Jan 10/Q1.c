#include<stdio.h> 
float avg(float a, float b, float c) 
{
    float z; 
    z=(a+b+c)/3; 
    return z;  
} 
int main()
{   
    float c; 
    c= avg(9,6,8); 
    printf("%f",c); 
    return 0;
}