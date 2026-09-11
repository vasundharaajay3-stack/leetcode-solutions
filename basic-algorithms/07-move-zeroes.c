#include <stdio.h>

int main()
{
    int nums[] = {0,0,0,0};
    int n = 4;

    int position = 0;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] != 0)
        {
            nums[position] = nums[i];
            position++;
        }
    }

    while (position < n)
    {
        nums[position] = 0;
        position++;
    }

    printf("Array after moving zeroes: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", nums[i]);
    }

    printf("\n");

    return 0;
}