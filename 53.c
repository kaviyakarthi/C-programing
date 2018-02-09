#include <stdio.h>

int main()
{
int n=123,sum=0,a;
while(n!=0)
{
	a=n%10;
	sum=sum+a;
	n/=10;

}
printf("The sum is %d",sum);
	return 0;
}
