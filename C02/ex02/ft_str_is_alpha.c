/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 10:54:01 by pmendez-          #+#    #+#             */
/*   Updated: 2023/07/11 14:14:56 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	contador;

	contador = 0;
	while (str[contador] != '\0')
	{
		if ((str[contador] < 'A' || str[contador] > 'Z')
			&& (str[contador] < 'a' || str[contador] > 'z'))
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
	char *str = "Hola1";
	int numero;

	numero = 0;
	numero = ft_str_is_alpha(str);

	printf("%d\n", numero);
	return (0);
}
*/
