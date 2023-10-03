/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   otherfunctions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 12:55:21 by pmendez-          #+#    #+#             */
/*   Updated: 2023/07/26 15:29:20 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

int	ft_strlen(char *str)
{
	int	contador;

	contador = 0;
	while (str[contador] != '\0')
		contador++;
	return (contador);
}

int	ft_errormessage(char *str)
{
	write(2, str, ft_strlen(str));
	return (0);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	contador;

	contador = 0;
	while (contador < n && src[contador] != '\0')
	{
		dest[contador] = src[contador];
		contador++;
	}
	while (contador < n)
	{
		dest[contador] = '\0';
		contador++;
	}
	return (dest);
}
