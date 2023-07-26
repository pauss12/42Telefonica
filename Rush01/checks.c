/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comprobacion.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 16:13:34 by pmendez-          #+#    #+#             */
/*   Updated: 2023/07/16 22:14:50 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	checknumber(char *str)
{
	int	var;

	var = 0;
	while (str[var] != '\0')
	{
		if (str[var] >= '1' && str[var] <= '4')
		{
			return (1);
		}
		var++;
	}
	return (0);
}

int	checkparameter(char *str)
{
	int	aux;

	aux = 0;
	while (str[aux] != '\0')
	{
		aux++;
	}
	if (aux == 16)
	{
		if (checknumber(str) == 1)
		{
			return (1);
		}
	}
	return (0);
}

char	*removespaces(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] != ' ')
		{
			str[j] = str[i];
			j++;
		}
		i++;
	}
	str[j] = '\0';
	return (str);
}
