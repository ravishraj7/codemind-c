#include<stdio.h>
int main()
{
    int a,i,count;
    scanf("%d",&a);
    for(i=2;i<=a-1;i++)
    {
        if(a%i==0)
        {
            break;
        }
    }
    if(i==a)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
    
}