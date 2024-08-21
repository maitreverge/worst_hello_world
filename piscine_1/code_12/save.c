/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   save.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 08:58:13 by ubuntu          #+#    #+#             */
/*   Updated: 2024/07/31 11:15:29 by ubuntu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

//pourquoi cette fonction bonne quesiton
int	derive(int helloworld)
{
	if (helloworld == 0)
		return (12);
	if (helloworld == 1)
		return (1);
	if (helloworld == 2)
		return (12);
	if (helloworld == 3)
		return (12);
	if (helloworld == 4)
		return (11);
	if (helloworld == 5)
		return (0);
	if (helloworld == 6)
		return (9);
	if (helloworld == 7)
		return (11);
	if (helloworld == 8)
		return (19);
	if (helloworld == 9)
		return (12);
	if (helloworld == 10)
		return (0);
	if (helloworld == 11)
		return (0);
	return (-1);
}

int	integrate(int helloworld)
{
	if (helloworld == 0)
		return (6 * 12);
	if (helloworld == 1)
		return (100 + 1);
	if (helloworld == 2)
		return (12 * 9);
	if (helloworld == 3)
		return (12 * 9);
	if (helloworld == 4)
		return (10 * 11 + 1);
	if (helloworld == 5)
		return (4 * 8);
	if (helloworld == 6)
		return (9 * 9 + 6);
	if (helloworld == 7)
		return (10 * 11 + 1);
	if (helloworld == 8)
		return (19 * 6);
	if (helloworld == 9)
		return (12 * 9);
	if (helloworld == 10)
		return (100);
	if (helloworld == 11)
		return (3 * 11);
	return (-1);
}

void	print_character_or_error(int helloworld)
{
	int	ascii_value;

	ascii_value = integrate(helloworld);
	if (ascii_value != -1)
		printf("%c", ascii_value);
}

void	print_message_recursive(const char *message, int helloworld)
{
	if (message[helloworld] == '\0')
		return ;
	print_character_or_error(helloworld);
	print_message_recursive(message, helloworld + 1);
}

int	main(void)
{
	char	message[13];

	derive(0);
	strcpy(message, "Hello World!");
	if (message[0] == 'H')
		print_message_recursive(message, 0);
	else
		printf("\n");
	return (0);
}
