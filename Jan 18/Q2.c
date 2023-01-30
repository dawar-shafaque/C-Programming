#include<stdio.h>

typedef struct compare 
{
    int d; 
    int m; 
    int y; 
}date; 
 
void display(date comp)
{
    printf("The date is %d/%d/%d\n",comp.d,comp.m,comp.y);
} 

int datecomp(date d1, date d2) 
{
    if(d1.y>d2.y)
    return 1; 
    if(d1.y<d2.y)
    return -1;

    if(d1.m>d2.m)
    return 1; 
    if(d1.m<d2.m)
    return -1;

    if(d1.d>d2.d)
    return 1;
    if(d1.d<d2.d)
    return -1;
}

int main()
{
    date d1={12,02,22};
    date d2={10,02,22}; 
    date *ptr; 
    date *ptr2; 
    ptr=&d1; 
    ptr2=&d2; 
    display(d1);
    display(d2); 
    int a = datecomp(d1,d2); 
    if(a==1)
    printf("%d/%d/%d is earlier",ptr2->d,ptr2->m,ptr2->y); 
    else 
    printf("%d/%d/%d is earlier",ptr->d,ptr->m,ptr->y);
    
}