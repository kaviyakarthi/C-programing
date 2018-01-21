

    #include<stdio.h>
    int main()
    {
    char s[10]={2};
    int i,count=0;
    for(i=0;s[i]!=0;i++)
    {
    if(s[i]=='0'||s[i]=='1'||s[i]=='2'||s[i]=='3'||s[i]=='5'||s[i]=='6'||s[i]=='7'||s[i]=='8'||s[i]=='9')
    {
    count=count+1;
    count++;
    }
    }
    if(count==0)
    printf("string not contains numbers");
    else
    printf(" Yes string contains numbers");
    return 0;
    }

