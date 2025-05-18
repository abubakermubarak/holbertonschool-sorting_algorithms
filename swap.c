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