/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 18:25:25 by pmendez-          #+#    #+#             */
/*   Updated: 2023/07/24 20:06:24 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	contador;

	contador = 0;
	while (src[contador] != '\0')
	{
		dest[contador] = src[contador];
		contador++;
	}
	dest[contador] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	str1[5] = "hola";
	char	str2[5];
	int		contador;

	contador = 0;

	ft_strcpy(str2, str1);

	while (str2[contador] != '\0')
	{
		write(1, &str2[contador], 1);
		contador++;
	}
}
*/
