/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 12:55:12 by pmendez-          #+#    #+#             */
/*   Updated: 2023/07/26 15:33:16 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h" 

/*
int	main(int argc, char *argv[])
{
	int		contador;

	contador = 0;
	if (argc > 0)
	{
		readfile(argv[1]);
	}
	return (0);
}
*/
int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			if ((ft_verif_map(argv[i])) == 1)
				return (0);
			else
				ft_print_solution(i, &argv[i]);
			i++;
		}
	}
	else
		return (0);
}
