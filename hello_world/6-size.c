#include <stdio.h>
/**
 * main - Return the size of different type of data
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("The size of a char is: \n", sizeof(char));
	printf("The size of an int is: \n", sizeof(int));
	printf("The size of a long int is: \n", sizeof(long int));
	printf("The size of a long long int is: \n", sizeof(long long int));
	printf("The size of a float is: \n", sizeof(float));
	return (0);
}
