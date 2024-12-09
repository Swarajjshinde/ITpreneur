/*5.  Check if a Number is Divisible by Both 3 and 5
Use the modulus operator % and logical &&.*/
#include<stdio.h>
int main()
{
    int a;
    printf("Enter your number:");
    scanf("%d",&a);

    if(a%3==0 && a%5==0){
        printf("%d is divisible by both 3 & 5...",a);
    }
    else if(a%3==0){
        printf("%d is divisible by 3 only",a);
    }
    else if(a%5==0){
        printf("%d is divisible by 5 only",a);
    }
    else{
        printf("%d is neither divisible by 3 nor 5....!",a);
    }
}