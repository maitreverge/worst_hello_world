/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coucou.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 11:32:27 by ubuntu         #+#    #+#             */
/*   Updated: 2024/07/31 11:36:09 by ubuntu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void	clear_screen(void);
void	print_plane(int offset);
void	flip_characters(const char *message, int delay);
void	initialize_display(char *display, const char *message, size_t len);
void	update_display(char *display, const char *message, size_t len);
void	mabite(int i, int sleep);
char	g_flip_chars(void);

char	g_flip_chars(void)
{
	return (("ABCDEFGHIJKLMNOPQRSTUVWXYZ")[rand() % 66]);
}

void	mabite(int i, int sleep)
{
	clear_screen();
	print_plane(i);
	usleep(sleep);
}

void	clear_screen(void)
{
	printf("\033[H\033[J");
}
