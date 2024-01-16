#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    float sum=0.0;
    int arr[n];
    float avg;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
        avg=sum/n;
    }
     printf("%.2f",avg);
}