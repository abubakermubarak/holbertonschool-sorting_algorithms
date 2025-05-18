#include "sort.h"
/**
 * swap - Function that swaps two values
 *
 * @a: Fisrt value
 * @b: Second value
 * Return: NONE
 */
void swap(int *a, int *b)
{
	int tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}
/**
 * selection_sort - Function that sort array of integers
 * Description: sort array using selection sort
 * @array: array of integers
 * @size: size of array
 * Return: NONE
 */

void selection_sort(int *array, size_t size)
{
	/* loop over all elements*/
	size_t i;
	size_t j;
	int min;
	int min_index;

	for (i = 0; i < size; i++)

	{
		min = array[i];
		min_index = i;
		/* search for the smallest elements*/
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < min)
			{
				min = array[j];
				min_index = j;
			}
		}
		swap(&array[i], &array[min_index]);
		print_array(array, size);
	}
}

