//Write a program to print multiplication table of 10 in reversed order.


#include<stdio.h>
int main()
{
    int i,n=10;
    for ( i = 10; i >=1; i--)
    {
        printf("%d x %d = %d\n",n,i,i*n);
    }
    
 
    return 0;
}