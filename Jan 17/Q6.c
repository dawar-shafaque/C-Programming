#include<stdio.h>
void rev(char *str)
{
   if(*str!='\0')
   {
       rev(str+1);
       printf("%c", *str);
   }
}
void pattern(char *a)
{
   if(*a!=0)
   {
      printf("%s\n",a);
      pattern(a+1);
   }
}
void main()
{
   char a[10];
   printf("Enter a string: ");
   scanf("%s",a);
   printf("\nReverse of the string: ");
   rev(a);
   printf("\nPattern: \n");
   pattern(a);
}