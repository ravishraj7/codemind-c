#include<stdio.h>
int main()
{
    int a,b,c=1,sum=0,d;
    scanf("%d",&a);
    b=a;
    while(a>0)
    {
        d=a%10;
        sum=sum+d;
        c=c*d;
        a=a/10;
    }
     if(sum==c)
     {
         printf("Spy Number");
     }
     else
     {
         printf("Not Spy Number");
     }
}