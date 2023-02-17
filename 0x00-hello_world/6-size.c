#include<stdio.h>

/**
 * main - A program that prints various computer sizes
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char charType;
int intType;
long int longintType;
long long int longlongintType;
float floatType;

printf("Size of char: %zu byte(s)\n", sizeof(charType));
printf("Size of int: %zu byte(s)\n", sizeof(intType));
Printf("size of long int: %zu byte(s)\n", sizeof(longintType));
printf("size of long long int: %zu byte(s)\n", sizeof(longlongintType));
printf("size of float: %zu byte(s)\n", sizeof(floatType));

return (0);
}
