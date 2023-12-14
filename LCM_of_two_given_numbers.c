#include<stdio.h>
int main()
{
    int num1,num2, max;
    scanf("%d%d",&num1,&num2);
    max = (num1>num2)? num1:num2;
    while(1)
    {
        if(max%num1 == 0 && max%num2 ==0)
        {
        printf("%d",max);
              break;
    }
     ++max;
}
 return 0;
}
 