/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 10:08:47 by pmendez-          #+#    #+#             */
/*   Updated: 2023/07/20 21:34:27 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	tamdest;
	int	tam;

	tamdest = 0;
	tam = 0;
	while (dest[tamdest] != '\0')
	{
		tamdest++;
	}
	while (src[tam] != '\0')
	{
		dest[tamdest] = src[tam];
		tam++;
		tamdest++;
	}
	dest[tamdest] = '\0';
	return (dest);
}
