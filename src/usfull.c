/*
** EPITECH PROJECT, 2020
** 
** File description:
** 
*/
#include <unistd.h>

int	my_strlen(char *str) {
	int	i = -1;

	while (str && str[++i]);
	return (i);
}

int	my_putchar(char c) {
	if (write(1, &c, 1) == -1)
		return (-1);
}

int	my_putstr(char *str) {
	int	i = -1;

	while (str && str[++i]) {
		if (my_putchar(str[i]) == -1)
			return (-1);
	}
	return (0);
}
