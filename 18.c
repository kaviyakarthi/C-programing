#include <stdio.h>

int main()
{
	 int n1=150, n2=160, i, temp, num, rem;

  for(i=n1+1; i<n2; ++i)
  {
      temp=i;
      num=0;
      while(temp!=0)
      {
          rem=(temp%10);
          num+=rem*rem*rem;
          temp/=10;
      }
      if(i==num)
      {
          printf("%d ",i);
      }
  }

	return 0;
}
