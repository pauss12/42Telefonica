/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 18:56:17 by pmendez-          #+#    #+#             */
/*   Updated: 2023/07/09 19:40:20 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	contador;
	int	i;

	i = 0;
	contador = 0;
	while (str[i] != '\0')
	{
		contador++;
		i++;
	}
	return (contador);
}
