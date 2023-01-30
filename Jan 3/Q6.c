#include<stdio.h> 

int main()
{  
    char a[30];
    int i; 
    char *p=&a[1];
    printf("enter the string"); 
    scanf("%s",a); 
    printf("The req string is\n");
    for(i=1;a[i]!='\0';i++)
    {   
        printf("%c",*p); 
        p++;
    
    }
    return 0; 
}
/*#include<stdio.h>

int main()
{
  char str[20] ;
    printf("Enter a String \n");
    scanf("%s",str);
   
    int i;
    
  for(i = 1; str[i] != '\0'; i++)
  {
    char *ptr=&str[i];
    printf("%c\n",*ptr);
  }
   return 0;
}*/