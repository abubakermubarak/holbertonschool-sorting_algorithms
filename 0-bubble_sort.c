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
bool is_sorted(int array[], size)
{
	size_t i;

	for (i = 0; i < size - 1; i++)
	{
		if (array[i] > array[i + 1])
		{
			return false;
		}
	}
	return true;
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
    

    for (i = 0; i < size - 1; i++)
    {
	    if ((is_sotred(array), size) == false)
	    {
		swap(&array[i], &array[i+1]);
	    }
	    
    }
}
