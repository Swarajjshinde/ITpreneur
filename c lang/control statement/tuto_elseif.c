#include <stdio.h>
int main()
{
    int sci, math;
    printf("Enter your marks for Science and Maths:\n");
    scanf("%d %d", &sci, &math);

    if ( sci >= 35 &&  math >= 35)
    {
        printf("you've scored more than 35 in both science and maths exams, so you're eligible for a gift...!");
    }
    else if ( sci < 35 &&  math < 35)
    {
        printf("You are failed in both exams so you wont get any gifts....!");
    }
    else if ( sci < 35 ||  math < 35)
    {
        printf("you've cleared only one exam, so you will get only one gift....!!");
    }

    return 0;
}