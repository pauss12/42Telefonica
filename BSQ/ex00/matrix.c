/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsoteldo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 17:53:28 by gsoteldo          #+#    #+#             */
/*   Updated: 2023/07/26 17:57:56 by gsoteldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "header.h"

int	ft_get_next_columns(char *argv, int fd)
{
	char	*buf;
	int		j;
	int		size_file;

	j = 0;
	size_file = ft_size_file(argv);
	buf = malloc(size_file * sizeof(char));
	if (buf == (void *)0)
		return (0);
	while (read(fd, &buf[j], 1))
	{
		if (buf[j] == '\n')
			break ;
		j++;
	}
	free (buf);
	return (j + 1);
}
