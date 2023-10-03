/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getvariables.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 15:34:33 by pmendez-          #+#    #+#             */
/*   Updated: 2023/07/26 17:27:46 by gsoteldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

char	ft_get_char_void(char *argv)
{
	int		i;
	char	*buf;
	int		fd;
	char	v;

	i = 0;
	fd = open(argv, O_RDONLY);
	buf = malloc(80 * sizeof(char));
	while (read(fd, &buf[i], 1) > 0)
	{
		if (buf[i] == '\n')
			break ;
		i++;
	}
	v = buf[i - 3];
	free (buf);
	close(fd);
	return (v);
}

char	ft_get_char_obst(char *argv)
{
	int		i;
	char	*buf;
	int		fd;
	char	o;

	i = 0;
    buf = (char *)malloc(1 * sizeof(char));
	fd = open(argv, O_RDONLY);
	if (buf == (void *)0)
		return (0);
	while (read(fd, &buf[i], 1))
	{
		if (buf[i] == '\n')
			break ;
		i++;
	}
	o = buf[i - 2];
	free (buf);
	close(fd);
	return (o);
}

char	ft_get_char_full(char *argv)
{
	int		i;
	char	*buf;
	int		fd;
	char	p;

	i = 0;
	fd = open(argv, O_RDONLY);
	buf = malloc(80 * sizeof(char));
	if (buf == (void *)0)
		return (0);
	while (read(fd, &buf[i], 1))
	{
		if (buf[i] == '\n')
			break ;
		i++;
	}
	p = buf[i - 1];
	free (buf);
	close(fd);
	return (p);
}
