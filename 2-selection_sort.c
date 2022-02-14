#include "sort.h"
/**
 * selection_sort - print the array after each time you swap two elements.
 * @array: array to sort.
 * @size: length of the array.
 */

void selection_sort(int *array, size_t size)
{
	size_t i = -1, j = 0, pos;
	int ay, ban, mc;

	for (i = i + 1; i < size; i++)
	{
		mc = array[i];
		ban = 0;

		for (j = j + 1; j < size; j++)
		{
			if (array[j] < mc)
			{
				ban = 1;
				mc = array[j];
				pos = j;
			}
		}
		if (ban == 1)
		{
			ay = array[pos];
			array[pos] = array[i];
			array[i] = ay;
			print_array(array, size);
		}
		j = i;
	}

}
