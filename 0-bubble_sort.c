#include "sort.h"

/**
 * bubble_sort - sorts an array
 * of integers in ascending order using the
 * Bubble sort algorithm
 *
 * @array: input arrray
 * @size: size of the array
 * Return: no return
 */

void bubble_sort(int *array, size_t size)
{
    size_t tmp,i,j;
    int swapped;

    for(i = 0; i < size ; i++)
    {
        swapped = 0;
        for(j = 0; j < size-1; j++)
        {
            if(array[j]> array[j+1])
            {
                tmp = array[j];
                array[j] = array[j+1];
                array[j+1] = tmp;
                print_array(array,size);
                swapped = 1;
            }
        }

        if (swapped == 0)
        {
            break;
        }
    }
}
