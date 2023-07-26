/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 10:28:22 by pmendez-          #+#    #+#             */
/*   Updated: 2023/07/17 10:05:58 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	**createtable(char *str);
void	freememory(char **matrix);
char	*removespaces(char *str);
int		checkparameter(char *str);
void	small_printtable(char **matrix);

int	main(int argc, char **argv)
{
	char	*str;
	char	**matrix;

	matrix = NULL;
	if (argc == 2)
	{
		str = removespaces(argv[1]);
		if (checkparameter(str) == 1)
		{
			matrix = createtable(str);
			small_printtable(matrix);
		}
		else
		{
			write(1, "ERROR\n", 6);
			return (0);
		}
			freememory(matrix);
	}
	else
		write(1, "ERROR\n", 6);

	return (0);
}
