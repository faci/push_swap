/*
** EPITECH PROJECT, 2020
** 
** File description:
** 
*/

typedef	struct		s_list {
	int		val;
	struct s_list	*next;
}			t_list;

typedef	struct	s_reper {
	t_list	*first;
	t_list	*last;
	int	size;
}		t_reper;
