#include <stdio.h>
int main() 
{	
    int a,b,i;
    char sym;
    for(i=0;i<4;i++)
    {
      printf("\nEnter the values");
      scanf("%d %c %d",&a,&sym,&b);
      if(sym=='/')
      printf("%d",a/b);
      else
      printf("%d",a%b);
    }
	return 0;
}
