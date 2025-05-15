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
	size_t i;
    	int flag; 
	flag = -1;
	
	while (flag != 0)
	{
		flag = 0;
		if (array[i] < array[i + 1])
		{
			swap(&array[i], &array[i + 1]);
			print_array(array, size);
			flag++;
		}
	}
	
}
