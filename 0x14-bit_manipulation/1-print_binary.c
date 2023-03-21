#include "main.h"

void print_binary(unsigned long int n)
{
	    if (n > 1) {
		            print_binary(n >> 1);  // recursive call to print the higher bits first
			        }
	        _putchar((n & 1) + '0');  // print the lowest bit
}
