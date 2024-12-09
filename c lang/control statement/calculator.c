#include <stdio.h>
int main()
{
    char op;
    int a, b;

    printf("enter your operator among (+,-,*,/)\n"
           "or enter 'x' to exit:\n");
    scanf("%c", &op);

    if (op == 'x')
    {
        printf("exiting the calculator...! ");
    }
    else
    {
        printf("Enter your values:\n");
        scanf("%d %d", &a, &b);

        switch (op)
        {

        case '+':
            printf("%d + %d = %d", a, b, a + b);
            break;
        case '-':
            printf("%d - %d = %d", a, b, a - b);
            break;
        case '*':
            printf("%d * %d = %d", a, b, a * b);
            break;
        case '/':
            printf("%d / %d = %d", a, b, a / b);
            break;

        default:
            printf("you've entered wrong input......!");
            break;
        }
    }

    return 0;
}