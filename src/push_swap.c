/*
** EPITECH PROJECT, 2020
** 
** File description:
** 
*/
#include <stdio.h>
#include "declare.h"

int	find_the_smallest(t_list *list) {
	int	pos = 0;
	int	val = 0;
	int	i = 0;

	val = list->val;
	while (list) {
		if (list->val < val) {
			val = list->val;
			pos = i;
		}
		list = list->next;
		i++;
	}
	return (pos);
}

int	loop_push_back(t_list *la, int pos_smallest) {
	int	i = -1;

	while (++i < pos_smallest) {
		if (action_push_back(la) == -1)
			return (-1);
	}
	return (0);
}

t_list	*loop_push_front(t_list *la, int pos_smallest, int size) {
	int	i = -1;

	while (++i < size - pos_smallest) {
		la = action_push_front(la);
		if (la == NULL)
			return (NULL);
	}
	return (la);
}

int	loop_push_list(int list_size, int smallest, t_list **toPush, t_list **receive) {
	while (list_size >= 0 && *toPush) {
		list_size = size_list(*toPush);
		smallest = find_the_smallest(*toPush);
		if (smallest <= (list_size / 2)) {
			if (loop_push_back(*toPush, smallest) == -1)
				return (-1);
		}
		else {
			*toPush = loop_push_front(*toPush, smallest, list_size);
			if (toPush == NULL)
				return (-1);
		}
		action_push_list(toPush, receive);
		my_putstr("pb ");
	}
	return (0);
}

int	my_swap(t_list **la, t_list **lb) {
	int	size_la = size_list(*la);
	int	smallest_la = find_the_smallest(*la);
	int	size_lb = 0;
	int	iterator = 0;
	
	if (loop_push_list(size_la, smallest_la, la, lb) == -1)
		return (-1);
	size_lb = size_list(*lb);
	while (iterator < size_lb) {
		if (action_push_list(lb, la) == -1)
			return (-1);
		my_putstr("pa ");
		iterator++;
	}
	return (0);
}
