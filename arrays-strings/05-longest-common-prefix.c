#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "dog";
    char str2[] = "racecar";
    char str3[] = "car";

    int i = 0;

    while (str1[i] != '\0' &&
           str2[i] != '\0' &&
           str3[i] != '\0' &&
           str1[i] == str2[i] &&
           str2[i] == str3[i])
    {
        i++;
    }

    if (i == 0)
    {
        printf("No Common Prefix\n");
    }
    else
    {
        printf("Longest Common Prefix: ");

        for (int j = 0; j < i; j++)
        {
            printf("%c", str1[j]);
        }

        printf("\n");
    }

    return 0;
}