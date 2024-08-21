/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opcodes.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 20:21:21 by ubuntu             #+#    #+#             */
/*   Updated: 2024/07/31 09:38:05 by ubuntu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPCODES_H
# define OPCODES_H

# define OPC_PRINT 0x42
# define OPC_END 0b10100101
# define OPC_SUB 0xFF
# define OPC_ADD 0xEE
# define OPC_AND 0xAA
# define OPC_NOT 0xBB
# define OPC_LESS 0xB1
# define OPC_EQ 0xB2
# define OPC_PUSH 0b10000000
# define OPC_DUP 0x01
# define OPC_POP 0x02
# define OPC_JMP 0xC0
# define OPC_JMPIF 0xC1
# define OPC_ROT 0xDD

#endif