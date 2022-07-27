#include <stdio.h>
#include <stdlib.h>

/**
* main - print the name of this function
* @argc: has the length of the arguments
* @argv: has the arguments
* 
* Return: always 0
*/
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);

}
