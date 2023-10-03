/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_solution.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 15:44:32 by pmendez-          #+#    #+#             */
/*   Updated: 2023/07/26 17:09:34 by gsoteldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "headers.h"

void	ft_print_solution(int i, char **argv)
{
	t_data	data;
	int		fd;
	int		j;
	char	*map;

	j = 0;
	data.obs = ft_get_char_obst(argv[i]);
	data.full = ft_get_char_full(argv[i]);
	data.numbercolumns = ft_get_number_columns(argv[i]);
	data.numberlines = ft_get_number_lines(argv[i]);
	fd = open (argv[i], O_RDONLY);
	if (fd != -1)
	map = *ft_read_file(argv[i]);
	while (j < data.numberlines)
	{
		ft_putstr(&map[j]);
		ft_putchar('\n');
		j++;
	}
	free(map);
	close (fd);
}
