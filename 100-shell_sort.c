#include "sort.h"

/**
 * shell_sort - Sort an array of integers in ascending
 *              order using the shell sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Uses the Knuth interval sequence.
 */
 
 void shell_sort(int *array, size_t size) {
    int interval = 1;
    while (interval <= size / 3) {
        interval = interval * 3 + 1;
    }
    while (interval > 0) {
        for (int a = interval; a < size; a++) {
            int temp = array[a];
            int j;
            for (j = a; j >= interval && array[j - interval] > temp; j -= interval) {
                array[j] = array[j - interval];
            }
            array[j] = temp;
        }
        interval = (interval - 1) / 3;
       print_array(array, size);
    }
}
