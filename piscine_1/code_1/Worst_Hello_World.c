/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Worst_Hello_World.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 09:18:40 by ubuntu          #+#    #+#             */
/*   Updated: 2024/07/31 11:28:33 by ubuntu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>

void	clear_screen(void)
{
	system("clear");
}

void	random_position(int *x, int *y)
{
	*x = rand() % 50;
	*y = rand() % 20;
}

const char	*message(void)
{
	return ("░▒▓█▓▒░░▒▓█▓▒░▒▓████████▓▒░▒▓█▓▒░      ░▒▓█▓▒░      ░▒▓██████▓▒░"
		"       ░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░░▒▓██████▓▒░░▒▓███████▓▒░░▒▓█▓▒░      "
		"   ░▒▓███████▓▒░       ░▒▓█▓▒░\n"
		"░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░      ░▒▓█▓▒░      ░▒▓█▓▒░     ░▒▓█▓▒░░▒▓█▓▒░"
		"      ░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░      "
		"  ░▒▓█▓▒░░▒▓█▓▒░      ░▒▓█▓▒░\n"
		"░▒▓████████▓▒░▒▓██████▓▒░ ░▒▓█▓▒░      ░▒▓█▓▒░     ░▒▓█▓▒░░▒▓█▓▒░"
		"      ░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓███████▓▒░░▒▓█▓▒░      "
		"  ░▒▓█▓▒░░▒▓█▓▒░      ░▒▓█▓▒░\n"
		"░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░      ░▒▓█▓▒░      ░▒▓█▓▒░     ░▒▓█▓▒░░▒▓█▓▒░"
		"      ░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░      "
		"  ░▒▓█▓▒░░▒▓█▓▒░      ░▒▓█▓▒░\n"
		"░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░      ░▒▓█▓▒░      ░▒▓█▓▒░     ░▒▓█▓▒░░▒▓█▓▒░"
		"      ░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░      "
		"  ░▒▓█▓▒░░▒▓█▓▒░             \n"
		"░▒▓█▓▒░░▒▓█▓▒░▒▓████████▓▒░▒▓████████▓▒░▒▓████████▓▒░▒▓██████▓▒░"
		"        ░▒▓█████████████▓▒░ ░▒▓██████▓▒░░▒▓█▓▒░░▒▓█▓▒░▒▓████████▓▒░"
		"▒▓███████▓▒░       ░▒▓█▓▒░");
}

int	main(void)
{
	int	x;
	int	y;
	int	color;

	srand(time(NULL));
	while (1)
	{
		clear_screen();
		random_position(&x, &y);
		color = rand() % 7 + 30;
		printf("\033[%d;%dH\033[%dm\033[5m%s\033[0m\n", y, x, color, message());
		usleep(200000);
	}
	return (0);
}
