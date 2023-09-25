#include "sort.h"
/**
 * quick_sort - sort an array using quick sort
 *
 * @array: an array to sort
 * @size: the size of the array
 *
 * Return: nothing
 */

void quick_sort(int *array, size_t size)
{

	quicksort_recursion(array, 0, size - 1, size);
}

/**
 * quicksort_recursion - wrapper function to quick sort using recursion
 * @array: the array to separate into sections
 * @low: the lower bound
 * @high: the higher bound
 * @size: the size of the array
 */

void quicksort_recursion(int array[], int low, int high, size_t size)
{
	if (low < high)
	{
		int pivot_index;

		pivot_index = partition(array, low, high, size);
		quicksort_recursion(array, low, pivot_index - 1, size);
		quicksort_recursion(array, pivot_index + 1, high, size);
	}
}

/**
 * partition - separate into two sections
 * @array: the array to separate into sections
 * @low: the lower bound
 * @high: the higher bound
 * @size: the size of the array
 * Return: the index of the pivot
 */

int partition(int array[], int low, int high, size_t size)
{
	int pivot_value, i, j;

	pivot_value = array[high];
	i = low;
	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot_value)
		{
			swap(&array[i], &array[j]);
			i++;
		}
	}
	swap(&array[i], &array[high]);
	print_array(array, size);
	return (i);
}

/**
 * swap - swap two numbers
 * @first_num: the first number to swap to
 * @second_num: the second number to swap from
 */

void swap(int *first_num, int *second_num)
{
	int tmp = *first_num;
	*first_num = *second_num;
	*second_num = tmp;
}
