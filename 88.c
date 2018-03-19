#include <stdio.h>

int main()
{
     int a,b,i,gcd,lcm;
  printf("Enter the numbers");
  scanf("%d %d",&a,&b);
  for(i=0;i<a&&i<b;i++)
  {
    if(a%i==0&&b%i==0)
    {
      i=gcd;
    }
  }
  lcm=(a*b)/gcd;
  
  printf("\nThe LCM of %d and %d is %d",a,b,lcm);
  

    return 0;
}
