/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   crear_tablero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 21:18:07 by pmendez-          #+#    #+#             */
/*   Updated: 2023/07/16 22:58:32 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	printtable_full(char **matrix);
void	filloutermatrix(char **matrix, char *str);
char	**find_4(char **matrix);

void	fill0matrix(char **matrix, int countrows, int countcolumns)
{
	while (countrows < 6)
	{
		countcolumns = 0;
		while (countcolumns < 6)
		{
			matrix[countrows][countcolumns] = '0';
			countcolumns++;
		}
		countrows++;
	}
}

char	**createtable(char *str)
{
	int		countrows;
	int		countcolumns;
	char	**matrix;

	countrows = 0;
	countcolumns = 0;
	matrix = (char **)malloc(6 * sizeof(char *));
	while (countrows < 6)
	{
		matrix[countrows] = (char *)malloc(6 * sizeof(char));
		countrows++;
	}
	countrows = 0;
	fill0matrix(matrix, countrows, countcolumns);
	filloutermatrix(matrix, str);
	find_4(matrix);
	printtable_full(matrix);
	write(1, "\n", 1);
	return (matrix);
}

void	freememory(char **matrix)
{
	int	countrows;

	countrows = 0;
	while (countrows < 6)
	{
		free(matrix[countrows]);
		countrows++;
	}
	free (matrix);
}
