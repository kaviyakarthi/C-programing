#include <stdio.h>

int main(void) 
{
	int a,b,temp;
	scanf("%d%d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("after swapping %d %d",a,b);
	
	return 0;
}
