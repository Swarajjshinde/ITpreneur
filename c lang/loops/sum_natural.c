#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("enter the natural number till which you want to perform addition:");
    scanf("%d",&n);

    for ( i = 1; i <= n; i++)
    {
        sum+=i;
    }
    printf("the sum of natural numbers till %d is : %d",n,sum);
 
    return 0;
}