#include  <stdio.h>
#include <stdlib.h>

void bubble_sort(int arr[], int size)
{
    int temp = 0;
    for (int i = 0; i < size; i++)
    {
        int already_sorted = 0;
        for (int j = 0; j < size-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                already_sorted = 1;
            }
        }

        if (already_sorted == 0)
        {
            break;
        }
    }
}

int main_bubble_sort()
{
    int distance_data[5] = {45,12,99,23,8};
    bubble_sort(distance_data, sizeof(distance_data)/sizeof(distance_data[0]));
    for (int i = 0; i < sizeof(distance_data)/sizeof(distance_data[0]); i++)
    {
        printf("%d ", distance_data[i]);
    }
    return 0;
}