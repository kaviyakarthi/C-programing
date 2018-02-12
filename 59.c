#include <stdio.h>

int main(void) 
{
	int a[20],n,i,max;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);	
	}
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		max=a[i];
	}
	printf("Max num is %d",max);
	return 0;
}
