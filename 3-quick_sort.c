#include "sort.h"
/**
 * quick_sort - Sorts an array of integers in ascending order using
 * the Quick sort algorithm
 * @array: The array to be sorted
 * @size: The size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	quick_sort_helper(array, 0, size - 1, size);
}

/**
 * quick_sort_helper - Sorts an array of integers in ascending order using
 * the Quick sort algorithm
 * @array: The array to be sorted
 * @lo: The lowest index of the partition to sort
 * @hi: The highest index of the partition to sort
 * @size: The size of the array
 */
void quick_sort_helper(int *array, int lo, int hi, size_t size)
{
	int p;

	if (lo < hi)

	{
		p = partition(array, lo, hi, size);
		quick_sort_helper(array, lo, p - 1, size);
		quick_sort_helper(array, p + 1, hi, size);
	}
}

/**
 * partition - Partitions an array of integers in ascending order using
 * the Quick sort algorithm
 * @array: The array to be sorted
 * @lo: The lowest index of the partition to sort
 * @hi: The highest index of the partition to sort
 * @size: The size of the array
 * Return: The index of the pivot
 */
int partition(int *array, int lo, int hi, size_t size)
{
	int pivot = array[hi], i = lo - 1, j, tmp;

	for (j = lo; j < hi; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i != j)
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
		}
	}
	if (array[i + 1] > array[hi])
	{
		tmp = array[i + 1];
		array[i + 1] = array[hi];
		array[hi] = tmp;
		print_array(array, size);
	}
	return (i + 1);
}
