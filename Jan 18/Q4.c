#include<stdio.h> 
#include<string.h>
struct student 
{
    int roll; 
    int sem; 
    float cgpa;
};
int main()
{ 
    struct student s1,s2; 
    struct student *ptr; 
    struct student *ptr2; 
    ptr=&s1; 
    (*ptr).roll=101; 
    printf("Enter the sem");
    scanf("%d",ptr->sem);
    (*ptr).cgpa=6.7;
    printf("%d\n",ptr->roll); 
    printf("%d\n",ptr->sem); 
    printf("%f\n",ptr->cgpa);    
    return 0; 
}