/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   plane.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 11:25:45 by ubuntu         #+#    #+#             */
/*   Updated: 2024/07/31 11:47:25 by ubuntu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

// Function prototypes
void	clear_screen(void);
void	print_plane(int offset);
void	flip_characters(const char *message, int delay);
void	initialize_display(char *display, const char *message, size_t len);
void	update_display(char *display, const char *message, size_t len);
void	mabite(int i, int sleep);
char	g_flip_chars(void);

int	main(void)
{
	const char		*hello_message;
	int				i;
	
	hello_message = "Hello World!";
	srand(time(NULL));
	i = 0;
	while (i < 5)
	{
		mabite(i, 500000);
		i++;
	}
	clear_screen();
	usleep(1000000);
	i = 4;
	while (i >= 0)
	{
		mabite(i, 500000);
		i--;
	}
	clear_screen();
	flip_characters(hello_message, 20000);
	return (0);
}

void	print_plane(int offset)
{
	int	i;

	i = 0;
	while (i < offset)
	{
		printf("\n");
		i++;
	}
	printf("    __|__\n");
	printf(" --o-(_)-o--\n");
}

void	initialize_display(char *display, const char *message, size_t len)
{
	memcpy(display, message, len);
	display[len] = '\0';
}

void	update_display(char *display, const char *message, size_t len)
{
	size_t	j;

	j = 0;
	while (j < len)
	{
		if (message[j] != ' ')
			display[j] = g_flip_chars();
		else
			display[j] = ' ';
		j++;
	}
}

void	flip_characters(const char *message, int delay)
{
	size_t		len;
	char		display[256];
	int			i;

	len = strlen(message);
	if (len >= 256)
		return ;
	initialize_display(display, message, len);
	i = 0;
	while (i < 20)
	{
		clear_screen();
		printf("%s\n", display);
		usleep(delay);
		i++;
	}
}
