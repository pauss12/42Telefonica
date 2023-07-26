/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 13:43:45 by pmendez-          #+#    #+#             */
/*   Updated: 2023/07/11 15:34:29 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	contador;

	contador = 0;
	while (str[contador] != '\0')
	{
		if (str[contador] < '0' || str[contador] > '9')
		{
			return (0);
		}
		contador++;
	}
	return (1);
}
/*
int	main(void)
{
	char *str = "123";
	int numero;

	numero = ft_str_is_numeric(str);
	printf("%d\n", numero);
	return (0);
}
*/
