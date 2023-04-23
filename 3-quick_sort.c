#include "sort.h"
/**
 * quicksort_helper - auxiliar function for the
 * quick_sort function
 * @a: input arrray
 * @low: first element
 * @high: last element
 * @size: size of the array
 * Return: no return
 */

void quicksort_helper(int below, int above, int *a, int size)
{
	int top, btm, i;
	int tmp;

	if (below < above)
	{
		top = above;
		btm = below;
		for (i = below; i < above; i++)
		{
			if (a[i] < a[top])
			{
				if (i != btm)
				{
					tmp = a[i];
					a[i] = a[btm];
					a[btm] = tmp;
					print_array(a, size);
				}
				btm++;
			}
		}
		if (btm != top && a[btm] != a[top])
		{
			tmp = a[btm];
			a[btm] = a[top];
			a[top] = tmp;
			print_array(a, size);
		}
		quicksort_helper(below, btm - 1, a, size);
		quicksort_helper(btm + 1, above, a, size);
	}
}

/**
 * quick_sort - function that sorts an array
 * of integers in ascending order
 *
 * @array: input arrray
 * @size: size of the array
 * Return: no return
 */
void quick_sort(int *array, size_t size)
{
	quicksort_helper(0, size - 1, array, size);
}
