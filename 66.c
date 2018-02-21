#include<stdio.h>
int main()
{
  int n,i;
  printf("Enter the number");
  scanf("%d",&n);
  for(i=2;i<=n/2;i++)
  {
    if(n%i==0)
    {
    printf("not prime number");
    break;
      
    }
    else
    {
      printf("prime");
      break;
    }
  }
  return 0;
}
