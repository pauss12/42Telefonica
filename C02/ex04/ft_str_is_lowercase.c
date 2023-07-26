/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:19:15 by pmendez-          #+#    #+#             */
/*   Updated: 2023/07/11 15:51:53 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	contador;

	contador = 0;
	while (str[contador] != '\0')
	{
		if (str[contador] < 'a' || str[contador] > 'z')
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
	char *str = "a";
	int numero;

	numero = ft_str_is_lowercase(str);
	printf("%d\n", numero);
	return (0);
}
*/
