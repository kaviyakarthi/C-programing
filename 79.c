#include "stdio.h"

int main(void) 
{
  int a,b,c,count=0,i;
  printf("Enter the numbers");
  scanf("%d %d",&a,&b);
  c=a*b;
  printf("The product of %d and %d is %d",a,b,c);
  for(i=1;i<c;i++)
  {
    if(i*i==c)
    {
      count++;
      break;
    }
  }
  if(count==1)
  printf("\nperfect square");
  else
  printf("\nNot perfect square");
  
  
  return 0;
}
