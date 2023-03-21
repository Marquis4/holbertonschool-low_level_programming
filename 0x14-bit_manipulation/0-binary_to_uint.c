#include "main.h"

/**
 *  * binary_to_uint - converts a binary number to an unsigned int
 *   * @b: pointer to a string of 0 and 1 chars
 *    *
 *     * Return: the converted number, or 0 if there is an invalid char or b is NULL
 *      */
unsigned int binary_to_uint(const char *b)
{
		unsigned int n = 0;

			if (b == NULL)
						return (0);

				while (*b != '\0')
						{
									if (*b != '0' && *b != '1')
													return (0);
											n <<= 1; /* shift left by one position */
													if (*b == '1')
																	n |= 1; /* set the rightmost bit to 1 */
															b++; /* move to the next char in the string */
																}

					return (n);
}
