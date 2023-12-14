#include<stdio.h>
int main()
{
    int n,rev=0,pal,r;
    scanf("%d",&n);
    pal=n;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(pal == rev)
    {
    printf("True");
    }
    else
    {
        printf("False");
    }
     return 0;
}