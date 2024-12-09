// 2. Relational Operators
// Problem:
// Write a program that takes two integers as input and calculates whether:

// The first number is greater than the second.
// The first number is less than the second.
// The numbers are equal.
// Print the results as 1 for true and 0 for false.

#include<stdio.h>
int main()
{
    int a;
    int b;
    printf("Enter the first number:");
    scanf("%d",&a);
   
    printf("Enter the second number:");
    scanf("%d",&b);

    printf("check if the 1st number is greater than the 2nd number:%d\n",(a>b));
    printf("check if the 1st number is less than the 2nd number:%d\n",(a<b));
    printf("check if the 1st and the 2nd numbers are equal:%d",(a==b));
    
    
}