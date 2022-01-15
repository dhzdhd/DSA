#include <stdio.h>

int arr[] = {2, 4, 6, 4, 6, 3, 7, 4, 8, 4, 2, 5, 6, 7, 8, 3, 6, 9, 4};
int arr_size = sizeof(arr) / sizeof(int);

int main(void)
{
    int element;
    printf("Enter element to search: ");
    scanf("%d", &element);

    for(int i = 0; i < arr_size; ++i)
    {
        if(arr[i] == element) {
            printf("Element found at %i\n", i);
            break; // If you want one match only
        }
    }
}