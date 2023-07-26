/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_table.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 21:29:31 by pmendez-          #+#    #+#             */
/*   Updated: 2023/07/16 22:57:07 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printtable_full(char **matrix)
{
	int	countrows;
	int	countcolumns;

	countrows = 0;
	countcolumns = 0;
	while (countrows < 6)
	{
		while (countcolumns < 6)
		{
			write(1, &matrix[countrows][countcolumns], 1);
			write(1, " ", 1);
			countcolumns++;
		}
		write(1, "\n", 1);
		countrows++;
		countcolumns = 0;
	}
}

void	small_printtable(char **matrix)
{
	int	countrows;
	int	countcolumns;

	countrows = 1;
	countcolumns = 1;
	while (countrows < 5)
	{
		while (countcolumns < 5)
		{
			write(1, &matrix[countrows][countcolumns], 1);
			write(1, " ", 1);
			countcolumns++;
		}
		write(1, "\n", 1);
		countrows++;
		countcolumns = 1;
	}
}

char array[] = "Hello World";