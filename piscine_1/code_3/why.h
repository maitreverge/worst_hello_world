/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   why.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 20:25:41 by ubuntu             #+#    #+#             */
/*   Updated: 2024/07/31 10:37:44 by ubuntu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHY_H
# define WHY_H

# include <stdio.h>
# include "opcodes.h"

# define STACK_SIZE 0x1000

void	do_opcode(unsigned char **code, char stack[STACK_SIZE],
			int *stack_top);
void	do_add(unsigned char **code, char stack[STACK_SIZE],
			int *stack_top);
void	do_sub(unsigned char **code, char stack[STACK_SIZE],
			int *stack_top);
void	do_and(unsigned char **code, char stack[STACK_SIZE],
			int *stack_top);
void	do_not(unsigned char **code, char stack[STACK_SIZE],
			int *stack_top);
void	do_jmpif(unsigned char **code, char stack[STACK_SIZE],
			int *stack_top);

# define CODE_SIZE 512

#endif