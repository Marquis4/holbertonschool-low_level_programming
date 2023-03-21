#include "lists.h"
/**
 * * list_len - returns the number of elements within a list
 * * @h:singly linked list
 * * Return: num of elements in list
 * */
size_t list_len(const list_t *h)
{
	const list_t *temp = h;
	int elementCount = 0;

	while (temp)
	{

		temp = temp->next;
		elementCount++;
	}
	return (elementCount);
}
