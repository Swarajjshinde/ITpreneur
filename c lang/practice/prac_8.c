/*3. Find the Smallest of Two Numbers Using Conditional Operator
Use the ternary operator ? : to determine the smallest of two numbers.*/

#include<stdio.h>
int main()
{
    int a,b;
    printf("enter your two numbers:\n");
    scanf("%d %d",&a,&b);

    (a>b)?printf("%d is greater than %d",a,b):printf("%d is greater than %d",b,a);

}