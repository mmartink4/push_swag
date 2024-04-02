/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcano-mu <mcano-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 14:15:39 by mcano-mu          #+#    #+#             */
/*   Updated: 2024/04/02 21:30:29 by mcano-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../push_swap.h"

static void push(t_stack **dst, t_stack **src)
{
	t_stack	*dst_aux;
	int i = (*src)[0].nbr;

	if (s_len(src) == 0)
		return ;
		
	dst_aux = (t_stack *)malloc(sizeof(t_stack) * (s_len(src) + 1));
	dst_aux[0].nbr = i;
	
	i = 0;
	while (i < s_len(dst))
	{
		dst_aux[i + 1].nbr = (*dst)[i].nbr;
		i++;
	}
	
	//free(*dst);
	*dst = (t_stack *)malloc(sizeof(t_stack) * (s_len(src) + 1));
	
	i = 0;
	while (i < s_len(&dst_aux))
	{
		(*dst)[i].nbr = dst_aux[i].nbr;
		i++;
	}

	ra(src, false);
	(*src)[s_len(src) - 1].nbr = (int)NULL;
	
	free(dst_aux);
}

void	pa(t_stack **a, t_stack **b, bool print)
{
	push(a, b);
	if (print)
		printf("pa\n");
}

void	pb(t_stack **b, t_stack **a, bool print)
{
	push(b, a);
	if (print)
		printf("pb\n");
}
