#include "sort.h"
/**
 * selection_sort - sort an array using selection sort
 *
 * @array: an array to sort
 * @size: the size of the array
 *
 * Return: nothing
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min_index;

	for (i = 0; i < size - 1; i++)
	{
		min_index = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_index])
			{
				min_index = j;
			}
		}
		if (min_index != i)
		{
			swap(&array[min_index], &array[i]);
			print_array(array, size);
		}
	}
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
