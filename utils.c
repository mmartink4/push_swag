/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcano-mu <mcano-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 14:06:25 by mcano-mu          #+#    #+#             */
/*   Updated: 2024/03/28 18:11:52 by mcano-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

void print_stack(t_stack **stack)
{
	int i = 0;
	while((*stack)[i].nbr != (int)NULL)
		printf("%d ", (*stack)[i++].nbr);
	printf("\n");
}

int s_len(t_stack **stack)
{
	int len = 0;
	while ((*stack)[len].nbr != (int)NULL)
		len++;
	return len;
}