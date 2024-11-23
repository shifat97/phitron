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
        printf("%d %d\n", i, freq[i]);
    }

    return 0;
}