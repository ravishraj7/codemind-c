#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int r=0;
    int temp=n;
    while(n!=0)
    {
        r=r*10+n%10;
        n=n/10;
    }
    if(temp==r)
    {
     printf("Palindrome");
    }
else
{
   printf("Not Palindrome");
}
 return 0;
}