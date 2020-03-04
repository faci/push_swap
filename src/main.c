/*
** EPITECH PROJECT, 2020
** 
** File description:
** 
*/
#include <stdlib.h>
#include <stdio.h>
#include "declare.h"

int	main(int ac, char **av) {
	t_list	*la = NULL;
	t_list	*lb = NULL;

	if (ac < 2) {
		printf("not enought argument");
		return (0);
	}
	la = init_list(&av[1]);
	if (la == NULL)
		return (-1);
	if (my_swap(&la, &lb) == -1)
		return (-1);
	return 0;
}
