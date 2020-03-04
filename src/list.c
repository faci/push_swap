/*
** EPITECH PROJECT, 2020
** 
** File description:
** 
*/
#include <stdlib.h>
#include <stdio.h>
#include "list.h"

int	show_list(t_list *list) {
	while (list) {
		printf("%d ", list->val);
		list = list->next;
	}
	printf("\n");
	return(0);
}

t_reper	*init_reper() {
	t_reper	*list = NULL;
	
	if ((list = malloc(sizeof(t_reper))) == NULL)
		return (NULL);
	list->first = NULL;
	list->last = NULL;
	list->size = 0;
	return (list);
}

t_list	*create_node(int val) {
	t_list	*new = NULL;

	new = malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);
	new->val = val;
	new->next = NULL;
	return (new);
}

int	add_node(t_reper **list, t_list *courent, int val) {
	t_list	*node = NULL;

	if ((node = create_node(val)) == NULL)
		return (-1);
	courent->next = node;
	(*list)->last = node;
	(*list)->size = (*list)->size++;
	return (0);
}

t_list	*init_list(char **arg) {
	int	i = 0;
	t_list	*node = NULL;
	t_reper	*list = NULL;

	if ((list = init_reper()) == NULL)
		return (NULL);
	if ((node = create_node(atoi(arg[0]))) == NULL)
		return (NULL);
	list->first = node;
	list->last = node;
	list->size = 1;
	while (arg[++i]) {
		if (add_node(&list, node, atoi(arg[i])) == -1)
			return (NULL);
		node = list->last;
	}
	return (list->first);
}
