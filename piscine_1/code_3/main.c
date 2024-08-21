/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 20:14:57 by ubuntu             #+#    #+#             */
/*   Updated: 2024/07/31 10:39:14 by ubuntu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "opcodes.h"
#include "why.h"
#include <stdlib.h>

void	gen_code(unsigned char *code)
{
	int	i;
	int	code_end;

	i = 0;
	code_end = 0;
	while ("Hello World!\n"[i] != '\0')
	{
		code[code_end] = OPC_PUSH;
		code[code_end + 1] = "Hello World!\n"[12 - i - 1];
		code_end += 2;
		i++;
	}
	while (i > 0)
	{
		code[code_end] = OPC_PRINT;
		code_end++;
		i--;
	}
	code[code_end++] = OPC_END;
}

void	do_jmpif(unsigned char **code, char stack[STACK_SIZE]
	, int *stack_top)
{
	if (stack[*stack_top])
		*code = *code + *(*code + 1) + 1;
	else
		*code = *code + 2;
	stack_top--;
}

int	main(void)
{
	unsigned char	*code;
	char			*stack;
	int				stack_top;
	unsigned char	*old;

	code = malloc(CODE_SIZE);
	old = code;
	stack = calloc(STACK_SIZE, sizeof(int));
	gen_code(code);
	stack_top = 0;
	while (*code != OPC_END)
		do_opcode(&code, stack, &stack_top);
	free(stack);
	free(old);
	return (0);
}
