#include "sort.h"
/**
 * bubble_sort - print the array after each time you swap two elements.
 * @array: array to be ordered.
 * @size: size.
 */

void bubble_sort(int *array, size_t size)
{
	size_t i;
	int flag = 0, v_s = 0;

	if (!array || !size)
		return;

	while (flag == 0)
	{
		flag = 1;
	for (i = 0; i < size - 1; i++)
	{
		if (array[i] > array[i + 1])
		{
			flag = 0;
			v_s = array[i];
			array[i] = array[i + 1];
			array[i + 1] = v_s;
			print_array(array, size);
		}
	}
	}
}
