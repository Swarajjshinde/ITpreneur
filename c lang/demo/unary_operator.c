//preincrement opertaor

#include<stdio.h>
int main()
{
    int a;
    printf("enter your number:\n");
    scanf("%d",&a);

    //printf("the value of ++a will be:%d",--a);
    printf("%d\n",(--a + a-- + a++ - ++a));
   
    return 0;
}