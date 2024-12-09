#include<stdio.h>
int main()
{
    int i, mul=1,n;
    printf("enter factorial number:");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        mul*=i;
    }
    
    printf("factorial of %d is %d",n,mul);

 
    return 0;
}