/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 11:15:53 by pmendez-          #+#    #+#             */
/*   Updated: 2023/07/20 10:44:21 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				tamdest;
	unsigned int	tam;

	tamdest = 0;
	tam = 0;
	while (dest[tamdest] != '\0')
	{
		tamdest++;
	}	
	while (src[tam] != '\0' && tam < nb)
	{
		dest[tamdest] = src[tam];
		tam++;
		tamdest++;
	}
	dest[tamdest] = '\0';
	return (dest);
}
