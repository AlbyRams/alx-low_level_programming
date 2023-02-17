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

printf("Size of a char: %zu byte(s)\n", sizeof(chartype));
printf("Size of an int: %zu byte(s)\n", sizeof(inttype));
Printf("size of a long int: %zu byte(s)\n", sizeof(longinttype));
printf("size of a long long int: %zu byte(s)\n", sizeof(longlonginttype));
printf("size of a float: %zu byte(s)\n", sizeof(floattype));

return (0);
}
