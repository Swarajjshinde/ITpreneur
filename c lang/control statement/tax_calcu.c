#include<stdio.h>
int main()
{
    float salary;
    printf("Enter your salary:");
    scanf("%f",&salary);

    if(salary<=250000){
        printf("There is no tax for 250000 salary or below it ...:)");
    }
    else if(salary>250000 && salary<=500000) {
       printf("For %f the tax will be 5 percent i.e. :%.2f",salary,(0.05*salary));
    }
    else if(salary>500000 && salary<=1000000) {
       printf("For %.2f the tax will be 20 percent i.e. :%.2f",salary,(0.2*salary));
    }else if(salary>1000000) {
       printf("For %f the tax will be 30 percent i.e. :%.2f",salary,(0.3*salary));
    }
 
    return 0;
}