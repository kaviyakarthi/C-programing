
#include "stdio.h"
#include<string.h>

int main() 
{

 char n[20];
 int i;
 printf("Enter the number");
 scanf("%s",n);
 for(i=0;n[i]!='\0';i++)
 {
   if(n[i]>='0' && n[i]<='9')
   {
     printf("%c",n[i]);
   }
 }

  return 0;
}
