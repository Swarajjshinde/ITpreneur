/*2. Check if a Number is Positive, Negative, or Zero
Use relational operators to determine the category of the number.*/

#include<stdio.h>
int main()
{
    int a;
    printf("enter your number:");
    scanf("%d",&a);

    if(a>0){
        printf("%d is a positive number",a);
    }
    else if(a<0){
        printf("%d is a negative number",a);
    }
    else{
        printf("you entered 0....!");
    }
}