// 4. Mixed Arithmetic and Relational Operators
// Problem:
// Write a program that takes two numbers, calculates their sum, and checks:

// If the sum is greater than 50.
// If the sum is less than or equal to 50.
// Print the results directly as 1 (true) or 0 (false).
#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter your 1st number:\n");
    scanf("%d",&num1);
    printf("Enter your 2nd number:\n");
    scanf("%d",&num2);
    int sum=num1+num2;
    printf("the sum of %d and %d is %d:\n",num1,num2,sum);

    sum>50?printf("the condition is true\n"):printf("the condition is false\n");
    sum<=50?printf("the condition is true"):printf("the condition is false");
}