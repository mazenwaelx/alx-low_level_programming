#include "lists.h"

/**
 * _strlen - return the length
 * @s: lol
 * Return: lol
*/

int _strlen(char *s)
{
int i = 0;
if (!s)
return (0);
while (*s++)
i++;
return (i);
}

/**
 * list_len - lol
 * @h: lol
 *
 * Return: always 0
*/


list_t *add_node(list_t **head, const char *str) {
if (str == NULL)
return (NULL);
    
list_t *new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);
    
new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}
new_node->len = _strlen(str);
new_node->next = *head;
*head = new_node;
    
return (new_node);
}
