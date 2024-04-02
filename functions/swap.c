/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcano-mu <mcano-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 13:36:58 by mcano-mu          #+#    #+#             */
/*   Updated: 2024/03/28 18:25:06 by mcano-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	swap(t_stack **stack)
{
	if (!stack[0] || !stack[1])
		return ;
	t_stack swapping = (*stack)[0];
	(*stack)[0] = (*stack)[1];
	(*stack)[1] = swapping;
}

void	sa(t_stack	**a, bool print)
{
	swap(a);
	if (print)
		printf("sa\n");
}

void	sb(t_stack **b, bool print)
{
	swap(b);
	if (print)
		printf("sb\n");
}

void	ss(t_stack **a, t_stack **b, bool print)
{
	swap(a);
	swap(b);
	if (print)
		printf("ss\n");
}