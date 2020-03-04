/*
** EPITECH PROJECT, 2020
** 
** File description:
** 
*/
#include <stdlib.h>
#include <stdio.h>
#include "declare.h"

int	action_push_back(t_list *list) {
	t_list	*tmp = NULL;

	if ((tmp = malloc(sizeof(t_list))) == NULL)
		return (-1);
	tmp->next = NULL;
	tmp->val = list->val;
	(*list) = (*list->next);
	while (list && list->next) {
		list = list->next;
	}
	list->next = tmp;
	my_putstr("ra ");
	return (0);
}

int	size_list(t_list *list) {
	int	n = 0;
	
	while (list) {
		list = list->next;
		n++;
	}
	return (n);
}

t_list	*action_push_front(t_list *list) {
	t_list	*tmp = NULL;
	t_list	*tmp_list = NULL;
	int	i = 0;

	if ((tmp = malloc(sizeof(t_list))) == NULL)
		return (NULL);
	if ((tmp_list = malloc(sizeof(t_list))) == NULL)
		return (NULL);
	tmp_list = list;
	while (tmp_list && tmp_list->next->next) {
		tmp_list = tmp_list->next;
		i++;
	}
	(*tmp) = (*tmp_list->next);
	tmp_list->next = NULL;
	tmp->next = list;
	my_putstr("rra ");
	return (tmp);
}

int	action_push_list(t_list **push, t_list **receive) {
	t_list	*tmp = NULL;

	if (push) {
		if ((tmp = malloc(sizeof(t_list))) == NULL)
			return (-1);
		(*tmp) = (**push);
		if (receive == NULL) {
			if (((*receive) = create_node(tmp->val)) == NULL)
				return (-1);
		} else {
			tmp->next = (*receive);
			(*receive) = tmp;
		}
		if ((*push)->next)
			(*push) = ((*push)->next);
		else {
			*push = NULL;
		}
		return (0);
	}
	return (0);
}
