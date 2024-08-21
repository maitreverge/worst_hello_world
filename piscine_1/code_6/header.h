/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 10:59:06 by ubuntu            #+#    #+#             */
/*   Updated: 2024/08/21 09:38:24 by ubuntu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int	is_greeting_done(char *str)
{
	char	c;
	int		i;
	FILE	*fp;

	fp = fopen("greeting.txt", "r");
	if (!fp)
		return (0);
	i = 0;
	while (*str)
	{
		c = fgetc(fp);
		if (feof(fp))
			break ;
		if (c != *str++)
		{
			fclose(fp);
			truncate("greeting.txt", i);
			return (0);
		}
		i++;
	}
	fclose(fp);
	if (!*str)
		return (1);
	return (0);
}

int	main(void)
{
	FILE		*fp;
	char		buffer[177];
	const char	*str = "#include <stdlib.h>\n#include <stdio.h>\nint main(){cha"
		"r *str=\"Hello World!\";char cmd[42];snprintf(cmd, sizeof(cmd), \"echo"
		" -n '%%c' >> greeting.txt\", str[%ld]);system(cmd);}";

	while (!is_greeting_done("Hello World!"))
	{
		fp = fopen("hello_world.c", "w");
		snprintf(buffer, sizeof(buffer), str, rand() % 12);
		fputs(buffer, fp);
		fclose(fp);
		system("gcc hello_world.c -o greeting && ./greeting");
	}
	system("cat greeting.txt");
}
