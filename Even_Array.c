#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int even=1;
    for(int i=0;i<n;i++)
    {
        if(i%2!=0 && arr[i]%2!=0)
        {
            even=0;
        }
    }
    if(even)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}