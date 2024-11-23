#include <stdio.h>

int main()
{
    int arr[6] = {1, 3, 2, 3, 5, 3};
    int freq[10] = {0};
    for (int i = 0; i < 6; i++)
    {
        freq[arr[i]]++;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", freq[i]);
    }

    int max = freq[0];

    for (int i = 0; i < 10; i++)
    {
        if (freq[i] > max)
        {
            max = freq[i];
        }
    }

    printf("MAX = %d\n", max);

    return 0;
}