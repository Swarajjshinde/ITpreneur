#include<stdio.h>
int main()
{
    int a;
    printf("enter your value:\n");
    scanf("%d",&a);

    (a>0)?printf("the value you entered is positive\n"):printf("the value you entered is negative\n");
    (a%2==0)?printf("the value you entered is divisible by 2"):printf("the value you entered is not divisible by 2");
    return 0;
}