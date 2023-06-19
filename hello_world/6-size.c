#include <stdio.h>
/**
 * main - Return the size of different type of data
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("The size of a char is: \n", size0f(char));
	printf("The size of an int is: \n", size0f(int));
	printf("The size of a long int is: \n", size0f(long int));
	printf("The size of a long long int is: \n", size0f(long long int));
	printf("The size of a float is: \n", size0f(float));
	return (0);
}
