/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:32:26 by pmendez-          #+#    #+#             */
/*   Updated: 2023/07/11 16:55:16 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	contador;

	contador = 0;
	while (str[contador] != '\0')
	{
		if (str[contador] < 'A' || str[contador] > 'Z')
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
	int numero;
	char *str = "aOLA";
	numero = ft_str_is_uppercase(str);

	printf("%d\n", numero);

	return (0);	
}
*/
