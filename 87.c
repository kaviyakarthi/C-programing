#include <stdio.h>

int main()
{
     int a,b,i,gcd;
  printf("Enter the numbers");
  scanf("%d %d",&a,&b);
  for(i=0;i<a&&i<b;i++)
  {
    if(a%i==0&&b%i==0)
    {
      i=gcd;
    }
  }
  printf("\nThe GCD of %d and %d is %d",a,b,gcd);
  

    return 0;
}
