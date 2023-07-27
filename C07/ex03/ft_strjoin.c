/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 16:52:43 by pmendez-          #+#    #+#             */
/*   Updated: 2023/07/27 19:50:11 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	contador;

	contador = 0;
	while (str[contador] != '\0')
	{
		contador++;
	}
	return (contador);
}

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

int	lentotal(int size, char **strs, char *sep)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len = len + ft_strlen(strs[i]);
		i++;
	}
	len = len + (size - 1) * ft_strlen(sep) + 1;
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		len;

	len = 0;
	if (size == 0)
	{
		str = (char *)malloc(sizeof(char));
		*str = 0;
		return (str);
	}
	str = malloc(lentotal(size, strs, sep) * sizeof(char));
	if (!str)
		return (NULL);
	*str = 0;
	while (len < size)
	{
		ft_strcat(str, strs[len]);
		if (len < size - 1)
			ft_strcat(str, sep);
		len++;
	}
	return (str);
}
