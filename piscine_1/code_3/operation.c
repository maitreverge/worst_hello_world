/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 08:25:31 by ubuntu          #+#    #+#             */
/*   Updated: 2024/07/31 10:13:00 by ubuntu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "why.h"
#include "opcodes.h"

void	do_add(unsigned char **code, char stack[STACK_SIZE]
	, int *stack_top)
{
	(*code)++;
	stack[*stack_top - 1] += stack[*stack_top];
	(*stack_top)--;
}

void	do_sub(unsigned char **code, char stack[STACK_SIZE]
	, int *stack_top)
{
	int	res;

	(*code)++;
	res = stack[*stack_top] - stack[*stack_top -1];
	stack[*stack_top - 1] = res;
	(*stack_top)--;
}

void	do_and(unsigned char **code, char stack[STACK_SIZE]
	, int *stack_top)
{
	(*code)++;
	stack[*stack_top - 1] = stack[*stack_top] && stack[*stack_top - 1];
	(*stack_top)--;
}

void	do_not(unsigned char **code, char stack[STACK_SIZE]
	, int *stack_top)
{
	(*code)++;
	stack[*stack_top] = !stack[*stack_top];
	(*stack_top)--;
}
