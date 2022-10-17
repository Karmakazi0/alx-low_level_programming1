#include <stdio.h>
/**
 * main - print out sizes of data types in c
 * code by yemi
 * Return: 0
*/
int main(void)
{
	char charType;
	int intType;
	double doubleType;
	float floatType;
	// sizeof evaluates the size of a variable
	 printf("Size of int: %zu bytes\n", sizeof(intType));
	 printf("Size of float: %zu bytes\n", sizeof(floatType));
	 printf("Size of double: %zu bytes\n", sizeof(doubleType));
	 printf("Size of char: %zu bytes\n", sizeof(charType));
	
       return 0;
}       
