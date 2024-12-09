#include<stdio.h>
int main()
{
    int n,i,not_prime;

    printf("enter the number to check if it is prime or not:");
    scanf("%d",&n);
    if (n<=1)
    {
        printf("it is not prime number.....!!");
    }
    else{
        for ( i = 2; i <n; i++)
        {
            if (n%i==0 && n!=2)
            {
                not_prime=1;
                break;
            }
            
        }
        if (not_prime==1)       
        {
            printf("%d is not a prime number..!",n);
        }
        else{
            printf("%d is a prime number...!",n);
        }
        
        
    }
 
    return 0;
}