#include <stdio.h>

int main()
{
	int a,b,temp;
	printf("Enter the number");
	scanf("%d %d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("after swapping%d,%d",a,b);
	
	
	return 0;
}
