/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 13:14:23 by pmendez-          #+#    #+#             */
/*   Updated: 2023/07/19 19:02:02 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

char	*
(char *dest, char *src, unsigned int n)
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
