/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 01:32:10 by pmendez-          #+#    #+#             */
/*   Updated: 2023/07/26 01:57:33 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		len;
	char	*dest;
	int		contador;

	if (src == NULL)
		return (NULL);
	len = 0;
	contador = 0;
	dest = (char *)malloc((len + 1) * sizeof(char));
	while (src[len] != '\0')
		len++;
	if (dest == NULL)
		return (NULL);
	while (contador <= len)
	{
		dest[contador] = src[contador];
		contador++;
	}
	return (dest);
}
/*
int	main(void)
{
	char *final;
	
	final = ft_strdup("Hola, Mundo!");
	printf("%s\n", final);

	free(final);
}
*/
