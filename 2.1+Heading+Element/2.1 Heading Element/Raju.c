#include <stdio.h>

int main()
{
    int numbers[25] = {/* your array of 25 numbers goes here */};
    int min = numbers[0];
    int max = numbers[0];

    for (int i = 1; i < 25; ++i)
    {
        if (numbers[i] < min)
        {
            min = numbers[i];
        }
        if (numbers[i] > max)
        {
            max = numbers[i];
        }
    }

    printf("Minimum number: %d\n", min);
    printf("Maximum number: %d\n", max);

    return 0;
}
