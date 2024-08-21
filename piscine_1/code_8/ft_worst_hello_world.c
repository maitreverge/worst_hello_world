/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_worst_hello_world.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 11:22:02 by ubuntu             #+#    #+#             */
/*   Updated: 2024/08/21 09:39:05 by ubuntu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_print_hello_world(char *src, char *dest)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (src[i])
	{
		if (src[i] == dest[j])
		{
			dest[j] = (src[i] + 1);
			j++;
		}
		i++;
	}
	dest[j] = '\0';
	printf("%s", dest);
	printf("%s", "!");
	return (dest);
}

int	main(void)
{
	char	*src;
	char	*dest;

	src = malloc(150 * sizeof(char));
	dest = malloc(150 * sizeof(char));
	if (src == NULL || dest == NULL)
	{
		perror("malloc failed");
		return 1;
	}
	strcpy(src, "cette chaine Gdkkn contient Vnqkc certains caracteres");
	strcpy(dest, "Gdkkn Vnqkc");
	ft_print_hello_world(src, dest);
	free(src);
	free(dest);
	return (0);
}
