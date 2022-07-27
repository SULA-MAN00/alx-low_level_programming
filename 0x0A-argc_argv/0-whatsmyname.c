#include <stdio.h>
#include <stdlib.h>

/**
* main - print the name of this function
* @argc: has the length of the arguments
* @argv: has the arguments
* 
* Return: always 0
*/

int main(int argc, char **argv)
{
	if (argc == 1)
		printf("%s\n", *argv);
	
	return (0);
}
