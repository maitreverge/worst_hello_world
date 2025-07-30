/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hello_world.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanyas <jsanyas@student.42perpignan.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 10:51:24 by jsanyas           #+#    #+#             */
/*   Updated: 2025/07/29 08:07:11 by jsanyas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//NB: May work on linux, keyword "may"
#include "header.h"
#include <stdlib.h>

char	*ft_strcat(char *dest, char *src);

void	forge_the_word(char **str)
{
	*str = malloc (3000 * sizeof(char));
	ft_strcat(*str, THE_WORD_01);
	ft_strcat(*str, THE_WORD_02);
	ft_strcat(*str, THE_WORD_03);
	ft_strcat(*str, THE_WORD_04);
	ft_strcat(*str, THE_WORD_05);
	ft_strcat(*str, THE_WORD_06);
	ft_strcat(*str, THE_WORD_07);
	ft_strcat(*str, THE_WORD_08);
	ft_strcat(*str, THE_WORD_09);
	ft_strcat(*str, THE_WORD_10);
	ft_strcat(*str, THE_WORD_11);
	ft_strcat(*str, THE_WORD_12);
	ft_strcat(*str, THE_WORD_13);
	ft_strcat(*str, THE_WORD_14);
	ft_strcat(*str, THE_WORD_15);
	ft_strcat(*str, THE_WORD_16);
	ft_strcat(*str, THE_WORD_17);
	ft_strcat(*str, THE_WORD_18);
	ft_strcat(*str, THE_WORD_19);
	ft_strcat(*str, THE_WORD_20);
	ft_strcat(*str, THE_WORD_21);
	ft_strcat(*str, THE_WORD_22);
	ft_strcat(*str, THE_WORD_23);
	ft_strcat(*str, THE_WORD_24);
}

void	forge_the_word_the_wordening(char **str)
{
	ft_strcat(*str, THE_WORD_25);
	ft_strcat(*str, THE_WORD_26);
	ft_strcat(*str, THE_WORD_27);
	ft_strcat(*str, THE_WORD_28);
	ft_strcat(*str, THE_WORD_29);
	ft_strcat(*str, THE_WORD_30);
	ft_strcat(*str, THE_WORD_31);
	ft_strcat(*str, THE_WORD_32);
	ft_strcat(*str, THE_WORD_33);
	ft_strcat(*str, THE_WORD_34);
	ft_strcat(*str, THE_WORD_35);
	ft_strcat(*str, THE_WORD_36);
	ft_strcat(*str, THE_WORD_37);
	ft_strcat(*str, THE_WORD_38);
	ft_strcat(*str, THE_WORD_39);
}

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != 0)
		i++;
	while (src[j] != 0)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = 0;
	return (dest);
}

int	main(void)
{
	char	*the_word;

	forge_the_word(&the_word);
	forge_the_word_the_wordening(&the_word);
	system(the_word);
	free(the_word);
	return (0);
}
