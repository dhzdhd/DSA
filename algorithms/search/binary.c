#include <stdio.h>

int arr[] = {2, 4, 6, 4, 6, 3, 7, 4, 8, 4, 2, 5, 6, 7, 8, 3, 6, 9, 4};
int arr_size = sizeof(arr) / sizeof(int);

void sort(int *arr)
{
    for(int i = 0; i < arr_size; ++i)
    {
        for(int j = 0; j < i + 1; ++j)
        {
            if(arr[j] > arr[j+1])
            {
                int buffer = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = buffer;
            }
        }
    }
}

int main(void)
{
    sort(arr);

    for(int i = 0; i < arr_size; ++i)
    {
        printf("%i ", arr[i]);
    }
    printf("\n");
}