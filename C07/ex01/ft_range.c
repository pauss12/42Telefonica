/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 02:05:00 by pmendez-          #+#    #+#             */
/*   Updated: 2023/07/27 16:51:42 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	contador;
	int	*numeros;
	int	size;
	int	i;

	size = max - min + 1;
	i = 0;
	numeros = (int *)malloc((max - min) * sizeof(int));
	if (min >= max)
		return (0);
	contador = 0;
	while (max > min)
	{
		numeros[i] = min;
		min++;
		i++;
	}
	return (numeros);
}
/*
int	main(void)
{
	int max;
	int min;
	int *numeros;
	int	contador;

	max = 5;
	min = 2;
	contador = 0;
	numeros = ft_range(min, max);

	while (contador < (max - min))
	{
		printf("%d\n", numeros[contador]);
		contador++;
	}
	free(numeros);
	return (0);
}
*/
