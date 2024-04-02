/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcano-mu <mcano-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 13:39:07 by mcano-mu          #+#    #+#             */
/*   Updated: 2024/03/28 19:36:20 by mcano-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <fcntl.h>


# include <stdbool.h>
# include <limits.h>

struct s_stack
{
	int				nbr;
	int				push_cost;
	bool			above;
	bool			cheapest;
	struct s_stack	*target;
};
typedef struct s_stack	t_stack;


// PUSH
void pa(t_stack **a, t_stack **b, bool print);
void pb(t_stack **a, t_stack **b, bool print);
// SWAP
void sa(t_stack **a, bool print);
void sb(t_stack **b, bool print);
void ss(t_stack **a, t_stack **b, bool print);
// ROTATE
void ra(t_stack **a, bool print);
void rb(t_stack **b, bool print);
void rr(t_stack **a, t_stack **b, bool print);
// REVERSE ROTATE
void rra(t_stack **a, bool print);
void rrb(t_stack **b, bool print);
void rrr(t_stack **a, t_stack **b, bool print);

// UTILS
void print_stack(t_stack **stack);
int s_len(t_stack **stack);
t_stack *init_stack(int *array);


#endif