#include "sort.h"

/**
 * bubble_sort - sort an array implenting the bubble sort
 * @array: the array to sort
 * @size: The size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int is_swapped;

	for (i = 0; i < size - 1; i++)
	{

		is_swapped = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{

				swap(&array[j], &array[j + 1]);
				print_array(array, size);
				is_swapped = 1;
			}
		}
		if (is_swapped == 0)
		{
			break;
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
