#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t linked list
 *
 * @head: pointer to the head of the list
 *
 * Return: the sum of all the data (n) of the list, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
    int sum = 0;
    dlistint_t *current;

    if (!head)
        return (0);

    current = head;
    while (current)
    {
        sum += current->n;
        current = current->next;
    }

    return (sum);
}
