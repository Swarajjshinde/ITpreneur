// 1. Arithmetic Operators
// Problem:
// Write a program that reads two integers and prints their:

// Sum
// Difference
// Product
// Quotient
// Remainder

#include<stdio.h>
int main()
{
    
    int a,b,sum,subs,mul,div,mod;
    printf("enter the first value:");
    scanf("%d",&a);
    printf("enter the first value:");
    scanf("%d",&b);
    sum=a+b;
    subs=a-b;
    mul=a*b;
    div=a/b;
    mod=a%b;
    printf("The addition of %d and %d is %d\n",a,b,sum);
    printf("The substraction of %d and %d is %d\n",a,b,subs);
    printf("The multiplication of %d and %d is %d\n",a,b,mul);
    printf("The division of %d and %d is %d\n",a,b,div);
    printf("The remainder of %d and %d after division is %d\n",a,b,mod);

    return 0;

}