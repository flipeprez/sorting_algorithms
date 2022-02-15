#include "sort.h"
/**
 * shell_sort - sorts an array of integers in ascending order using shell sort
 * @array: array to sort.
 * @size:lenght of the array.
 */
void shell_sort(int *array, size_t size)
{
	size_t gap = 1, i, j;
	int aux;

	if (!array || size < 2)
		return;

	while (gap < size / 3)
		gap = gap * 3 + 1;

	while (gap > 0)
	{
		for (i = gap; i < size; i++)
		{
			aux = array[i];
			for (j = i; j >=  gap && array[j - gap] > aux; j -= gap)
				array[j] = array[j - gap];

			array[j] = aux;

		}
		gap = ((gap - 1) / 3);
		print_array(array, size);
	}
}
