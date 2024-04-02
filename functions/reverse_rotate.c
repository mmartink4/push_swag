/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcano-mu <mcano-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 14:01:35 by mcano-mu          #+#    #+#             */
/*   Updated: 2024/03/28 18:24:21 by mcano-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	reverse_rotate(t_stack **stack)
{
	/*
	1 2 3 4 5
	rotating = stack[len-1]
	2 = 1
	3 = 2
	...
	stack[0] = rotating
	5 1 2 3 4
	*/
	t_stack rotating = (*stack)[s_len(stack) - 1];
	int i = s_len(stack) - 1;
	while (i > 0)
	{
		(*stack)[i] = (*stack)[i - 1];
		i--;
	}
	(*stack)[0] = rotating;
}

void	rra(t_stack	**a, bool print)
{
	reverse_rotate(a);
	if (print)
		printf("rra\n");
}

void	rrb(t_stack **b, bool print)
{
	reverse_rotate(b);
	if (print)
		printf("rrb\n");
}

void	rrr(t_stack **a, t_stack **b, bool print)
{
	reverse_rotate(a);
	reverse_rotate(b);
	if (print)
		printf("rrr\n");
}