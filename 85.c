#include <stdio.h>
#include<string.h>
int main() 
{	
    char c[10];
    int i;
    printf("Enter the character");
    scanf("%c",&c);
    for(i=0;i<10;i++)
    {
      if(i%2==0)
      
      printf("%c",c[i]);
    }
    for(i=0;i<10;i++)
    {
      if(i%2==1)
     printf("%c",c[i]);
    }
	return 0;
}
