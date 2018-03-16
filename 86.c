#include <stdio.h>
#include<string.h>
int main()
{
 char a[20];
    int i,flag=0;
    printf("Enter the string");
    scanf("%s",a);
    
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==a[i+1])
        {
            flag=1;
            break;
        }
        
    }
    if(flag==0)
    printf("Yes isogram");
    else
    printf("NO");
    
	return 0;
}
