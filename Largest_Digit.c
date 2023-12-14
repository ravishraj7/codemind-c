#include<stdio.h>
int main()
{
    int num,digit,max = 0;
    scanf("%d",&num);
    while(num != 0)
    {
        digit = num % 10;
        if(digit> max)
        {
            max = digit;
        }
        num /= 10;
    }
     printf("%d",max);
     return 0;
}