#include <stdio.h>
int main()
{
    int l;

    int w;

    printf("enter your length of the rectangle :\n");
    scanf("%d", &l);
    printf("enter your width of the rectangle :\n");
    scanf("%d", &w);
    int area = l * w; // first we take input from user then we are calculating the area of rectangle
    printf("area of the rectangle :%d \n", area);
}