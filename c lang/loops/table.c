//Write a program to print multiplication table of a given number n.

#include<stdio.h>
int main()
{
    int n,i=1,a;

    printf("Enter the number for particular table:");
    scanf("%d",&n);
    printf("the table of %d is :\n",n);
    for ( i=1 ; i <=10; i++)
    {
        printf("%d x %d = %d\n",n,i,i*n);
    }
    
    return 0;
}