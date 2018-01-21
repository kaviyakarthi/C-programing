#include <stdio.h>

int main()
{
	int a[100]={1,2,3}; 
	int i,c,size=3,max;
	max=a[0];
	for(i=0;i<size;i++)
	{
		if(a[i]<max)
		{
			max=a[i];
		
			
		}
	}
	printf("%d",max);
	
	
	return 0;
}
