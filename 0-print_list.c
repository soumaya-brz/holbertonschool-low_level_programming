#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the first node of the list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
\tsize_t count = 0;

\twhile(h != NULL)
\t{
\t\tif(h->str == NULL)
\t\t\tprintf("[0] (nil)\n");
\t\telse
\t\t\tprintf("[%u] %s\n", h->len, h->str);

\t\th = h->next;
\t\tcount++;
\t}

\treturn(count);
}
