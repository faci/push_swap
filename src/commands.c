/*
** EPITECH PROJECT, 2020
** 
** File description:
** 
*/
#include <stdio.h>
#include "declare.h"

int	action_sa_sb(t_list *stck) {
	int	tmp = 0;
	
	tmp = stck->val;
	stck->val = stck->next->val;
	stck->next->val = tmp;
	return (0);
}

int	action_sc(t_list *l_a, t_list *l_b) {
	action_sa_sb(l_a);
	action_sa_sb(l_b);
	return (0);
}

int	action_pa(t_list *l_a, t_list *l_b) {
	t_list	*new = NULL;

	new = create_node(l_b->val);
	if (new == NULL)
		return (-1);
	new->next = l_a;
	return (0);
}

int	action_pb(t_list *l_a, t_list *l_b) {
	t_list	*new = NULL;

	new = create_node(l_a->val);
	if (new == NULL)
		return (-1);
	new->next = l_b;
	return (0);
}
