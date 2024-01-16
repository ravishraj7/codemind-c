#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int z;
    scanf("%d",&z);
    int found=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==z)
        found=1;
    }
    if(found==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}