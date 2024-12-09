#include<stdio.h>
int main()
{
    int a,b;
    printf("enter your age :");
    scanf("%d",&a);
    

    /*if(i>18){
        printf("this person is eligible for voting");}
    else{
        printf("this person is not eligible for voting");}*/

    /*if(i>a){
        printf("%d is greater than %d",i,a);
    }
    else{
        printf("%d is greater than %d",a,i);
    }*/

   if(a>0){
    printf("age is positive");
    if(a>18){
        printf("the person is eligible for voting");
    }
    else{
       printf("the person is not eligible for voting"); 
    }
   }
   else{
    printf("age is negative");
   }

}