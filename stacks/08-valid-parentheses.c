#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    printf("Enter parentheses: ");
    scanf("%s", str);

    char stack[100];
    int top = -1;

    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];

        if (ch == '(' || ch == '[' || ch == '{')
        {
            top++;
            stack[top] = ch;
        }
        else if (ch == ')' || ch == ']' || ch == '}')
        {
            if (top == -1)
            {
                printf("Invalid\n");
                return 0;
            }

            char open = stack[top];
            top--;

            if ((ch == ')' && open != '(') ||
                (ch == ']' && open != '[') ||
                (ch == '}' && open != '{'))
            {
                printf("Invalid\n");
                return 0;
            }
        }
    }

    if (top == -1)
    {
        printf("Valid\n");
    }
    else
    {
        printf("Invalid\n");
    }

    return 0;
}
