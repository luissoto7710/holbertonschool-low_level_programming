#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to the head of the list_t list
 * 
 * Return: the number of elements in the list
 */
size_t list_len(const list_t *h)
{
    const list_t *current = h;
    size_t elements = 0;

    while (current != NULL)
    {
        elements++;
        current = current->next;
    }

    return elements;
}

