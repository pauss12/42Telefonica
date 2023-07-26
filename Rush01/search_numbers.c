/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   busquedanumeros.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 09:44:25 by pmendez-          #+#    #+#             */
/*   Updated: 2023/07/16 22:25:24 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	fill_rows_with_4(char **matrix, int fil, int col)
{
	char	number;

	col = 1;
	number = '1';
	while (col <= 4)
	{
		matrix[fil][col] = number;
		col++;
		number++;
	}
}

void	fill_columns_with_4(char **matrix, int fil, int col)
{
	char	number;

	fil = 1;
	number = '1';
	while (fil <= 4)
	{
		matrix[fil][col] = number;
		fil++;
		number++;
	}
}

char	**find_4(char **matrix)
{
	int	fil;
	int	col;

	fil = 0;
	while (fil <= 5)
	{
		col = 0;
		while (col <= 5)
		{
			if (matrix[0][col] == '4')
			{
				fill_columns_with_4(matrix, fil, col);
			}
			if (matrix[fil][0] == '4')
			{
				fill_rows_with_4(matrix, fil, col);
			}
			col++;
		}
		fil++;
	}
	return (matrix);
}
