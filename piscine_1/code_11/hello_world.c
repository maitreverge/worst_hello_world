/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hello_world.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 15:58:24 by ubuntu          #+#    #+#             */
/*   Updated: 2024/07/31 13:00:34 by ubuntu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <time.h>

int	c_al_c_ul_a_t_e(void)
{
	unsigned int	rnd;
	int				max_value;

	max_value = 100;
	rnd = 0;
	while (rnd != 42)
	{
		rnd = rand() % (max_value + 1);
		usleep(50000);
	}
	return (rnd);
}

void	pr__in_______t(int h2g2)
{
	while (h2g2 != 3)
	{
		if (c_al_c_ul_a_t_e() == 42 && h2g2 == 0)
		{
			write(1, "Hel", 3);
			h2g2++;
		}
		if (c_al_c_ul_a_t_e() == 42 && h2g2 == 1)
		{
			write(1, "lo,", 3);
			h2g2++;
		}
		if (c_al_c_ul_a_t_e() == 42 && h2g2 == 2)
		{
			write(1, " Wo", 3);
			h2g2++;
		}
		if (c_al_c_ul_a_t_e() == 42 && h2g2 == 3)
		{
			write(1, "rld.", 4);
			h2g2++;
			break ;
		}
	}
}

int	main(void)
{
	int	h2g2;

	h2g2 = 0;
	srand(time(NULL));
	pr__in_______t(h2g2);
	return (0);
}
