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
 *  bubble_sort - sorting function
 *  Description:  sorting alogrthim bubble sort
 *  @array: array to sort
 *  @size: the array size
 *  return: NONE
*/
void bubble_sort(int *array, size_t size)
{
    size_t i;
    size_t j;

    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (array[i] > array[j])
            {
                swap(&array[i], &array[j]);
                print_array(array, size);
            }
        }
    }
}