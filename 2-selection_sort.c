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

void selection_sort(int *array, size_t size)
{
    /* loop over all elements*/
    size_t i;
    size_t j;
    for (i = 0; i < size; i++)
    {
        /* search for the smallest elements*/
        for (j = i + 1; j < size; j++)
        {
            if (array[j]  < array[i])
            {
                swap(&array[i], &array[j]);
                print_array(array, size);
            }
        }
    }
}