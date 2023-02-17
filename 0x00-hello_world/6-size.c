#include<stdio.h>

/**
 * main - A program that prints the size of various computer types
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char charType;
int intType;
long int longintType;
long long int longlongintType;
float floattype;

// sizeof evaluates the size of a variable
printf("Size of a char: %zu byte(s)\n", sizeof(charType));
printf("Size of an int: %zu byte(s)\n", sizeof(intType)); 
Printf("size of a long int: %zu byte(s)\n", sizeof(longintType));
printf("size of a long long int: %zu byte(s)\n", sizeof(longlongintType));
printf("size of a float: %zu byte(s)\n", sizeof(floatType));

return (0);
}
