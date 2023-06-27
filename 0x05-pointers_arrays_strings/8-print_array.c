#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints elements of an array
 * @arr: The array to be printed
 * @size: The size of the array
 */
void print_array(int *arr, int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
        printf("%d", arr[i]);

        if (i != size - 1)
        {
            printf(", ");
        }
    }

    printf("\n");
}
