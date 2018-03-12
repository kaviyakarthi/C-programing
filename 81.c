#include <stdio.h>
int main() 
{	
    int k,o,i;
    for(i=0;i<3;i++)
    {
        scanf("%d %d",&k,&o);
        if(k>o)
        {
            printf("%d\n",k-o);
        }
        else
        {
            printf("%d\n",o-k);
        }
    }
	return 0;
}
