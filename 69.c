#include <stdio.h>

int main(void)
{
	int a,b,d;
	printf("Enter the numbers");
	scanf("%d %d",&a,&b);
	d=a-b;
	if(d%2==0)
	printf("\nEven");
	else
	printf("\nOdd");
	return 0;
}
