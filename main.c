/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcano-mu <mcano-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 13:38:38 by mcano-mu          #+#    #+#             */
/*   Updated: 2024/04/02 21:30:39 by mcano-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack s_stack = {
	.nbr = (int)NULL,
	.push_cost = (int)NULL,
	.above = NULL,
	.cheapest = NULL,
	.target = NULL
};

int *split_atoi(char *str)
{
	int *array;
	int i = 0, j = 0, k = 0;
	
	while (str[i])
	{
		if (str[i] == ' ')
			j++;
		i++;
	}
	array = (int *)malloc(sizeof(int) * (j + 1));
	i = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			array[k] = atoi(&str[i]);
			k++;
			while (str[i] >= '0' && str[i] <= '9')
				i++;
		}
		i++;
	}
	return array;
}

int *get_args(char **argv, int argc)
{
	int *args_parsed;
	int i = 1;

	args_parsed = (int *)malloc(sizeof(int) * (argc - 1));
	while (argv[i])
	{
		args_parsed[i - 1] = atoi(argv[i]);
		i++;
	}
	return args_parsed;
}

t_stack *init_stack(int *array)
{
	t_stack *stack;
	int i = 0;
	
	stack = (t_stack *)malloc(sizeof(t_stack));
	if (!stack)
		return NULL;
	while(array[i])
	{
		stack[i].nbr = array[i];
		i++;
	}
	return stack;
}

int main(void)//int argc, char **argv)
{
	int *array;
	int argc = 9;
	char *argv[9] = {0, "4", "2", "91", "77", "3", "22", "35"};
	
	// ARGS -> ARRAY
	if (argc < 2)
		return 0;
	else if (argc == 2)
		array = split_atoi(argv[1]);
	else
		array = get_args(argv, argc);
	
	// ARRAY -> STACK	// se puede saltar el paso d meterlos en array y meterlos directamente en stack
	t_stack *a = init_stack(array);
	t_stack *b = (t_stack *)malloc(sizeof(t_stack) * (s_len(&a) + 1));

	print_stack(&a);
	print_stack(&b);
	
	pb(&b, &a, false);
	
	print_stack(&a);
	print_stack(&b);
	
	pb(&b, &a, false);
	
	print_stack(&a);
	print_stack(&b);
	
	pb(&b, &a, false);
	
	print_stack(&a);
	print_stack(&b);
	
	/*printf("stacka: ");
	print_stack(&a);
	printf("stackb: ");
	print_stack(&b);*/
	
	// TURK ALG
	/*while(!stack_sorted(a))
	{
		if (stack_len(a) == 2)
			sa(&a, false);
		else if (stack_len(a) == 3)
			sort_three(&a);
		else
			sort_stack(&a, &b);
	}*/
	
	return 0;
}