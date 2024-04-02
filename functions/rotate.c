/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcano-mu <mcano-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 13:53:28 by mcano-mu          #+#    #+#             */
/*   Updated: 2024/03/28 18:25:00 by mcano-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	rotate(t_stack **stack)
{
	/*
	1 2 3 4 5
	rotating = stack[0]
	1 = 2
	2 = 3
	...
	stack[len-1] = rotating
	2 3 4 5 1
	*/
	t_stack rotating = (*stack)[0];
	int i = 0;
	while ((*stack)[i + 1].nbr != (int)NULL)
	{
		(*stack)[i] = (*stack)[i + 1];
		i++;
	}
	(*stack)[i] = rotating;
}

void	ra(t_stack	**a, bool print)
{
	rotate(a);
	if (print)
		printf("ra\n");
}

void	rb(t_stack **b, bool print)
{
	rotate(b);
	if (print)
		printf("rb\n");
}

void	rr(t_stack **a, t_stack **b, bool print)
{
	rotate(a);
	rotate(b);
	if (print)
		printf("rr\n");
}