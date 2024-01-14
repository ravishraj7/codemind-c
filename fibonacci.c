#include<stdio.h>
int main()
{
    int i,n;
    int t1=0,t2=1;
    int r=t1+t2;
    scanf("%d",&n);
    printf("%d %d",t1,t2);
    for(i=3;i<=n;i++)
    {
        printf(" %d",r);
        t1=t2;
        t2=r;
        r=t1+t2;
    }
     return 0;
}