#include<stdio.h>
int main()
{
    int M,N,i, count = 0;
    scanf("%d%d",&M,&N);
    for(i = M;i <= N; i++)
    {
        if(i % 3 == 0)
        {
            count++;
        }
    }
     printf("%d",count);
     return 0;
}