#include<stdio.h>
int main()
{
    int x,y,gcd;
    scanf("%d %d",&x,&y);
    for(int i=1;i<=x;i++)
    {
       if(x%i==0&&y%i==0)
         {
            gcd=i;
        }
    }
    printf("%d",gcd);
    return 0;
}