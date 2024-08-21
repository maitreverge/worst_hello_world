/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opcode.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 20:35:21 by ubuntu             #+#    #+#             */
/*   Updated: 2024/07/31 10:59:47 by ubuntu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "opcodes.h"
#include "why.h"

void	do_less(unsigned char **code, char stack[STACK_SIZE]
	, int *stack_top)
{
	(*code)++;
	stack[*stack_top - 1] = (stack[*stack_top] < stack[*stack_top - 1]);
	(*stack_top)--;
}

void	do_eq(unsigned char **code, char stack[STACK_SIZE]
	, int *stack_top)
{
	(*code)++;
	stack[*stack_top - 1] = (stack[*stack_top] == stack[*stack_top - 1]);
	(*stack_top)--;
}

int	do_opcode2(unsigned char **code, char stack[STACK_SIZE]
	, int *stack_top)
{
	if (**code == OPC_PRINT)
	{
		printf("%c", stack[(*stack_top)--]);
		return (1);
	}
	else if (**code == OPC_POP)
	{
		(*stack_top)--;
		return (1);
	}
	else if (**code == OPC_PUSH)
	{
		(*stack_top)++;
		stack[*stack_top] = *(*code + 1);
		return (2);
	}
	else if (**code == OPC_ROT)
	{
		stack[*stack_top] = stack[*stack_top - 1] ^ stack[*stack_top];
		stack[*stack_top - 1] = stack[*stack_top] ^ stack[*stack_top - 1];
		stack[*stack_top] = stack[*stack_top - 1] ^ stack[*stack_top];
		return (1);
	}
	return (0);
}

void	do_opcode(unsigned char **code, char stack[STACK_SIZE]
	, int *stack_top)
{
	if (**code == OPC_ADD)
		do_add(code, stack, stack_top);
	else if (**code == OPC_SUB)
		do_sub(code, stack, stack_top);
	else if (**code == OPC_AND)
		do_and(code, stack, stack_top);
	else if (**code == OPC_NOT)
		do_not(code, stack, stack_top);
	else if (**code == OPC_LESS)
		do_less(code, stack, stack_top);
	else if (**code == OPC_EQ)
		do_eq(code, stack, stack_top);
	else if (**code == OPC_DUP)
	{
		stack[*stack_top + 1] = stack[*stack_top];
		(*stack_top)++;
		(*code)++;
	}
	else if (**code == OPC_JMPIF)
		do_jmpif(code, stack, stack_top);
	else if (**code == OPC_JMP)
		(*code) = *code + (*(*code + 1));
	else
		*code = *code + do_opcode2(code, stack, stack_top);
}
