/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hello_world.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 15:18:29 by ubuntu          #+#    #+#             */
/*   Updated: 2024/07/31 13:11:27 by ubuntu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

char	trkl_c_est_golri(char fjdfgboiahgvoiahghfoauyguhaisddvh)
{
	int	auerfgoaeygviuaddgfukhagekva;

	auerfgoaeygviuaddgfukhagekva = 0;
	while (auerfgoaeygviuaddgfukhagekva != fjdfgboiahgvoiahghfoauyguhaisddvh)
		auerfgoaeygviuaddgfukhagekva++;
	auerfgoaeygviuaddgfukhagekva = 0;
	while (auerfgoaeygviuaddgfukhagekva != fjdfgboiahgvoiahghfoauyguhaisddvh)
		auerfgoaeygviuaddgfukhagekva++;
	auerfgoaeygviuaddgfukhagekva = 0;
	while (auerfgoaeygviuaddgfukhagekva != fjdfgboiahgvoiahghfoauyguhaisddvh)
		auerfgoaeygviuaddgfukhagekva++;
	auerfgoaeygviuaddgfukhagekva = 0;
	while (auerfgoaeygviuaddgfukhagekva != fjdfgboiahgvoiahghfoauyguhaisddvh)
		auerfgoaeygviuaddgfukhagekva++;
	auerfgoaeygviuaddgfukhagekva = 0;
	while (auerfgoaeygviuaddgfukhagekva != fjdfgboiahgvoiahghfoauyguhaisddvh)
		auerfgoaeygviuaddgfukhagekva++;
	auerfgoaeygviuaddgfukhagekva = 0;
	while (auerfgoaeygviuaddgfukhagekva != fjdfgboiahgvoiahghfoauyguhaisddvh)
		auerfgoaeygviuaddgfukhagekva++;
	auerfgoaeygviuaddgfukhagekva = 0;
	while (auerfgoaeygviuaddgfukhagekva != fjdfgboiahgvoiahghfoauyguhaisddvh)
		auerfgoaeygviuaddgfukhagekva++;
	auerfgoaeygviuaddgfukhagekva = 0;
	return (fjdfgboiahgvoiahghfoauyguhaisddvh);
}

char	aidhgbaejihghaelihgalers(char sdfiguhsrioughsiuhgiushgijahkerghauihhg)
{
	char	adifughiauehgilaeeig;

	srand(time(NULL));
	while (sdfiguhsrioughsiuhgiushgijahkerghauihhg != adifughiauehgilaeeig)
	{
		adifughiauehgilaeeig = 0 % 200;
	}
	return (sdfiguhsrioughsiuhgiushgijahkerghauihhg);
}

void	write2(int numero_chiant, char le_caractere_a_afficher_dans_le_terminal,
		int nombre_de_numero_de_caractere_a_afficher_dans_le_terminal)
{
	int	i;

	(void)numero_chiant;
	(void)nombre_de_numero_de_caractere_a_afficher_dans_le_terminal;
	printf("%d", trkl_c_est_golri(le_caractere_a_afficher_dans_le_terminal));
	i = -1;
	aidhgbaejihghaelihgalers(le_caractere_a_afficher_dans_le_terminal);
	while (++i != 10)
	{
		write(1, "\0", 1);
		write(1, "\0", 1);
		write(1, "\0", 1);
		write(1, "\0", 1);
		write(1, "\0", 1);
		write(1, "\0", 1);
		write(1, "\0", 1);
	}
	write(1, "\n", 1);
}

int	main(void)
{
	int		i;
	char	*t;

	i = 0;
	t = "Hello World";
	while (t[i])
	{
		write2(1, t[i], 1);
	}
	return (0);
}
