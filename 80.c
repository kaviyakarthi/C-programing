#include "stdio.h"

int main(void) 
{
 int n,i,a[20],temp,t=0;
 printf("Enter the number\n");
 scanf("%d",&n);
 while(n!=0)
 {
   temp=n%10;
   if(temp%2==1)
   {
     a[t]=temp;
     t++;
   }
      n=n/10;
  }
  for(i=t-1;i>=0;i--)
  {
       printf("%d ",a[i]);
  }
	return 0;

}
