#include "sort.h"
#include <stdbool.h>
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
 *  bubble_sort - sorting function
 *  Description:  sorting alogrthim bubble sort
 *  @array: array to sort
 *  @size: the array size
 *  return: NONE
*/
void bubble_sort(int *array, size_t size)
{
	int len;
	int i;
    int flag;
	flag = 0;
	len  = size;
	while (flag == 0)
	{
		flag = 1;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap(&array[i], &array[i + 1]);
				print_array(array, size);
				flag = 0;
			}
		}
		len--;
	}

}
