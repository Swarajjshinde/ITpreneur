// 3.Logical Operators
// Problem:
// Write a program that takes three integers and prints:

// The result of (num1 > 0) && (num2 > 0) && (num3 > 0)
// The result of (num1 % 2 == 0)  (num2 % 2 == 0)  (num3 % 2 == 0)
// The negation of (num1 > num2)
#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter the first number:\n");
    scanf("%d",&num1);
   
    printf("Enter the second number:\n");
    scanf("%d",&num2);

    printf("Enter the second number:\n");
    scanf("%d",&num3);

    printf("check if all the numbers are positive: %d\n",((num1>0)&&(num2>0)&&(num3>0)));
    printf("check if one of the number is even or not: %d\n",((num1%2==0)||(num2%2==0)||(num3%2==0)));
    printf("check if num1 is greater than num2: %d",!(num1>num2));

}