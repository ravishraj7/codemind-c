#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=n;j++)
        {
            if(j==i|| i+j==n+1)
            {
                printf("%d",i);
            }
            else
            {
                printf(" ");
            }
        }
        printf("
");
    }
}