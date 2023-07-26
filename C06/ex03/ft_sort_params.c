/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 22:12:13 by pmendez-          #+#    #+#             */
/*   Updated: 2023/07/24 23:04:34 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0' || s2[i] == '\0' )
		{
			return (0);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

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

void	ft_sort_char_tab(char *tab[], int size)
{
	int		temporal1;
	char	*var;

	temporal1 = 0;
	while (temporal1 < size - 1)
	{
		if (ft_strcmp(tab[temporal1], tab[temporal1 + 1]) > 0)
		{
			var = tab[temporal1];
			tab[temporal1] = tab[temporal1 + 1];
			tab[temporal1 + 1] = var;
			temporal1 = 0;
		}	
		temporal1++;
	}
}

int	main(int argc, char *argv[])
{
	int	contador;

	contador = 1;
	ft_sort_char_tab(argv, argc);
	while (contador < argc)
	{
		write(1, argv[contador], ft_strlen(argv[contador]));
		write(1, "\n", 1);
		contador++;
	}
}
