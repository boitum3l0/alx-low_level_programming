#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
/**
 * Prototyes will be stored here.
 */

int _putchar(char c);
list_t *add_node(list_t **head, const char *str);
size_t list_len(const list_t *h);
list_t *add_node_end(list_t **head, const char *str);;
void free_list(list_t *head);
size_t print_list(const list_t *h);

#endif
