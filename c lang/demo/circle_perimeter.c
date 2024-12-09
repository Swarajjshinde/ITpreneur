#include<stdio.h>
int main()
{
    const float pi=3.14;
    int r;
    printf("enter value of the radius:\n");
    scanf("%d",&r);
    float peri=2*pi*r;

    printf("the perimeter of the circle is:%.3f\n",peri);
}