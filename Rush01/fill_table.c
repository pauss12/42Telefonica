/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_table.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 22:15:56 by pmendez-          #+#    #+#             */
/*   Updated: 2023/07/16 22:27:18 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**fillrow1(char **matrix, char *str)
{
	int	j;
	int	arrayposition;

	j = 1;
	arrayposition = 0;
	while (arrayposition < 4)
	{
		matrix[0][j] = str[arrayposition];
		arrayposition++;
		j++;
	}
	return (matrix);
}

char	**filllastrow(char **matrix, char *str)
{
	int	j;
	int	arrayposition;

	j = 1;
	arrayposition = 4;
	while (arrayposition < 8)
	{
		matrix[5][j] = str[arrayposition];
		arrayposition++;
		j++;
	}
	return (matrix);
}

char	**fillcolumn1(char **matrix, char *str)
{
	int	i;
	int	arrayposition;

	i = 1;
	arrayposition = 8;
	while (arrayposition < 12)
	{
		matrix[i][0] = str[arrayposition];
		arrayposition++;
		i++;
	}
	return (matrix);
}

char	**filllastcolumn(char **matrix, char *str)
{
	int	i;
	int	arrayposition;

	i = 1;
	arrayposition = 12;
	while (arrayposition < 16)
	{
		matrix[i][5] = str[arrayposition];
		arrayposition++;
		i++;
	}
	return (matrix);
}

void	filloutermatrix(char **matrix, char *str)
{
	matrix = fillrow1(matrix, str);
	matrix = filllastrow(matrix, str);
	matrix = fillcolumn1(matrix, str);
	matrix = filllastcolumn(matrix, str);
}
