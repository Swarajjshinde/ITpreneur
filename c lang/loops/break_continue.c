#include<stdio.h>
int main()
{
    int i,a;
    printf("Enter the value between 1 to 25:\n");
    scanf("%d",&a);
    if (a>25)
    {
        printf("invalid input.....!!");
    }
    else{
    for ( i = 1; i <= a; i++)
    {
        if (i==5)
        {   
            continue;
        }
        
        printf("the value of i is %d\n",i);
        
        
    }
    
    }
    return 0;
}