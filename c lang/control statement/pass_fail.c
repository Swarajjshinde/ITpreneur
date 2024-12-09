#include <stdio.h>
int main()
{
    int sci, math, eng;
    printf("Enter marks for following subjects:\n");
    printf("English:");
    scanf("%d", &eng);
    printf("Maths:");
    scanf("%d", &math);
    printf("Science:");
    scanf("%d", &sci);

    if (eng + math + sci >= 40)
    {
        printf("you've scored %d marks ....!\n\n", (eng + math + sci));
        if (eng>=33 && math>=33 && sci>=33)
        {
            printf("Also,you have more than 33 marks in each subject\n");
            printf("Hence you're pass......!!!");
        }
        else{
            printf("But you couldn't score more than 33 marks in each subject.\n");
            printf("you're failed....!");

        }
        
    }
    else
    {
        printf("The sum is less than 40 i.e. %d\n",(eng+math+sci));
        printf("you're failed....!!!!");
    }

    return 0;
}