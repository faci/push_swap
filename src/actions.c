/*
** EPITECH PROJECT, 2020
** 
** File description:
** 
*/

#include "declare.h"

int	print_action(char *cmd) {
	if (my_putstr(cmd) == -1 ||
	    my_putstr("\n") == -1)
		return (-1);
	return (0);
}

