#include "main.h"
#include <stdio.h>
/**
* reverse_array - a function that reverses the content of an array of integers.
*
* @a: is a pointer type char
* @n: is the number of elements of the array
*
* Return: Always 0.
*/
void reverse_array(int *a, int n)
{
	int result[500];
	int i;

	n--;

	for (i = 0; i <= n; i++)
		result[i] = a[i];
	for (i = 0; i <= n; i++)
		a[i] = result[n - i];
}
