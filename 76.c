#include<stdio.h>

int main() {
    int n,i,count=0;
    printf("Enter the num");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
     count++;
       }
      
    }
    
    if(count==0)
   {
       printf("\n%d is prime number ",n);
    }
    else
    {
        printf("\n%d is composite number",n);
    }

    return 0;
}
