/*
** EPITECH PROJECT, 2020
** 
** File description:
** 
*/
#include "list.h"

/*
 * usfull.c
 */
int	my_strlen(char *);
int	my_putchar(char);
int	my_putstr(char *);

/*
 * actions.c
 */
int	print_action(char *);

/*
 * list.c
 */
int	show_list(t_list *);
t_list	*create_node(int);
int	add_node(t_reper *, t_list *, int);
t_list	*init_list(char **);

/*
 * commands.c
 */
int	action_sa_sb(t_list *);
int	action_sc(t_list *, t_list *);
int	action_pa(t_list *, t_list *);
int	action_pb(t_list *, t_list *);

/*
 * more_commands.c
 */
int	size_list(t_list *);
int	action_push_back(t_list *);
t_list	*action_push_front(t_list *);
int	action_push_list(t_list **, t_list **);

/*
 * push_swap.c
 */
int	find_the_smallest(t_list *);
int	my_swap(t_list **, t_list **);
