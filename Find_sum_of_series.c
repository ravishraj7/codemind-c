#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    float sum = 0;
    for(int i=1;i<=n;i++)
    {
        sum = sum+(1/(float)i);
    }
     printf("%.2f",sum);
}