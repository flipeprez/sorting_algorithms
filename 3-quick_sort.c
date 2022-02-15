#include "sort.h"
/**
 * swap - function to swap elements.
 * @a: a pointer.
 * @b: b pointer.
 */
void swap(int *a, int *b)
{
	int sw = *a;
	*a = *b;
	*b = sw;
}

/**
 * qsp - particion function.
 * @array: array to make particion.
 * @low: lower number.
 * @high: higher number.
 * @size: length of the array.
 * Return:particion.
 */
int qsp(int array[], int low, int high, size_t size)
{
	int j;
	/*selct rightmost element*/
	int idx_pvt = high;
	/*pointer greater element*/
	int i = (low - 1);
	/*trasverse and compare*/
	for (j = low; j < high; j++)
	{
		if (array[j] <= array[idx_pvt])
		{
			i++;
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}
	i++;
	if (array[i] > array[idx_pvt])
	{
		swap(&array[i], &array[idx_pvt]);
		print_array(array, size);
	}
	return (i);

}
/**
 * qsprecursive - makes the recursive call.
 * @array: array recibed.
 * @low: lower number.
 * @high: higher number.
 * @size:length of the array.
 */
void qsprecursive(int array[], int low, int high, size_t size)
{
	if (low < high)
	{
		int pivot = qsp(array, low, high, size);

		if (pivot > 0)
			qsprecursive(array, low, pivot - 1, size);
		if (pivot < high)
			qsprecursive(array, pivot + 1, high, size);
	}
}
/**
 * quick_sort - sort an arrays of integers in ascendent order.
 * @array:array to sort.
 * @size:size of the array.
 */
void quick_sort(int *array, size_t size)
{
	if (array && size > 1)
		qsprecursive(array, 0, (size - 1), size);
}
