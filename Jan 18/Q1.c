#include<stdio.h> 
#include<string.h>
struct student 
{
    int roll; 
    float cgpa; 
    char name[20];
};
int main()
{ 
    struct student s1; 
    printf("enter the name of s1: \n"); 
    scanf("%s", s1.name); 
    printf("enter the roll no of s1: \n"); 
    scanf("%d",&s1.roll); 
     printf("enter the value for cgpa of s1: \n"); 
    scanf("%f",&s1.cgpa); 

    printf("roll no is %d\n", s1.roll); 
    printf("cgpa is %f\n", s1.cgpa); 
    printf("Name is %s\n", s1.name); 
    return 0;
}