#include<stdio.h>

void stringpattern(char s[20])
{   
    int w,x,y,z,m,n,j,k,p,q;
    char t[20]={0};
    int i;

    for(i=0;i<20;i++)
    {
        if(s[i]=='\0')
        {
            break;
        }

        else
        {
            continue;
        }
    }


    for(int l=0;l<i;l++)
    {
        t[l]=s[l];
    }
    printf("\nThe forward string pattern is:\n");

    char *a;
    a=&t[0];
    n=i;

    char *b=a;

    for(k=n;k>=1;k--)
    {
        for(j=0;j<k;j++)
        {
            printf("%c",*(b+j));
        }

        printf("\n");
        a=a+1;
        b=a;
    }
    char temp;

    for(p=0,q=i-1;p<=q;p++,q--)
    {
        temp=t[p];
        t[p]=t[q];
        t[q]=temp;
    }

    printf("\n"); 
    printf("The reversed string pattern is:\n");

    char *d=&t[0];
    char *e=d;
    z=i;

    for(x=z;x>=1;x--)
    {
        for(y=0;y<x;y++)
        {
            printf("%c",*(e+y));
        }

        printf("\n");
        d=d+1;
        e=d;
    }

}

int main()
{
    char str[20]={0};
    printf("Enter a string(20 characters):\n");
    scanf("%s",str);

    stringpattern(str);

    return 0;
}