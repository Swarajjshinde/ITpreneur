#include<stdio.h>
int main()
{
    int i,n=8,sum=0;
    printf("table of 8 is:\n");
    for ( i = 1; i <= 10; i++)
    {
        printf("%d x %d= %d \n",n,i,n*i);
        sum+=(i*n);
    }
    printf("the sum of %d 's table is : %d",n,sum);
 
    return 0;
}