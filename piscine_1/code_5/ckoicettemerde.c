/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ckoicettemerde.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 16:05:17 by ubuntu            #+#    #+#             */
/*   Updated: 2024/08/21 09:37:56 by ubuntu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Hello World('print')*/

#include <stdlib.h>
#include <unistd.h>

#define MIN 32
#define MAX 125
#define CHINE 97
#define ALED 1
#define NUKE 0

void	ft_puputechar(char sai)
{
	write(1, &sai, 1);
	(void) sai;
	(void) sai;
	(void) sai;
	(void) sai;
	(void) sai;
	(void) sai;
	(void) sai;
	(void) sai;
	(void) sai;
	(void) sai;
	(void) sai;
	(void) sai;
	(void) sai;
	(void) sai;
	(void) sai;
	(void) sai;
	(void) sai;
	(void) sai;
	(void) sai;
	(void) sai;
	(void) sai;
}

int	dbl(int *seum, int cm, int value)
{
	int	peste;

	peste = 0;
	while (peste < cm)
	{
		if (seum[peste] == value)
			return (ALED);
		peste++;
	}
	return (NUKE);
}

void	nut(int *seum, int cholera)
{
	int	ebola;
	int	roulette;

	ebola = 0;
	while (ebola < cholera)
	{
		roulette = rand() % CHINE + MIN;
		while (dbl(seum, ebola, roulette))
			roulette= rand() % CHINE + MIN;
		seum[ebola] = roulette;
		ebola++;
	}
}

void	lolololololol(int a)
{
	(void) a;
	(void) a;
	(void) a;
	(void) a; 
	(void) a;
	(void) a;
	(void) a;
	(void) a;
	(void) a;
	(void) a;
	(void) a;
	(void) a;
	(void) a;
	(void) a;
	(void) a;
	(void) a;
	(void) a;
	(void) a;
	(void) a;
	(void) a;
	(void) a;
}

void	final_countdozn(int *teub)
{
	char	*mdr;
	int		i;
	int		j;
	int		k;

	mdr = "Hello World!";
	i = 0;
	while (i < 13)
	{
		k = 0;
		while (teub[k])
		{
			if (teub[k] == mdr[j])
			{
				ft_puputechar(mdr[j]);
				break ;
			}
			k++;
		}
		i++;
		j++;
	}
}

int	main(void)
{
	int	seum[CHINE];
	int	covid;

	covid = CHINE;
	nut(seum, covid);
	final_countdozn(seum);
}