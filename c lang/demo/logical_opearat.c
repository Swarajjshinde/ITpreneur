#include<stdio.h>
int main()
{
    int a=45;
    int b=56;

    printf("%d\n",((a<=b)&&(a<b)));
    printf("%d\n",((a<=b)||(a<b)));
    printf("%d",!((a<=b)&&(a<b)));

}