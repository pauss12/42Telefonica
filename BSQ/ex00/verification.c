/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verification.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsoteldo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 17:06:05 by gsoteldo          #+#    #+#             */
/*   Updated: 2023/07/26 17:57:53 by gsoteldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

void	ft_call(char *argv, t_data data)
{
	data.varnothing = ft_get_char_void(argv);
	data.obs = ft_get_char_obst(argv);
	data.full = ft_get_char_full(argv);
	data.tamsize = ft_size_file(argv);
}

int	ft_verif_chars(char *argv)
{
	int		i;
	int		ret;
	int		fd;
	char	*buf;
	t_data	data;

	i = 0;
	ret = 0;
	fd = open(argv, O_RDONLY);
	ft_get_second_line(fd);
	buf = malloc(data.tamsize * sizeof(char));
	if (buf == (void *)0)
		return (0);
	ret = read(fd, buf, data.tamsize);
	while (ret == 0)
		buf[ret] = '\0';
	while (buf[i])
	{
		if (buf[i] != data.varnothing && buf[i] != data.obs && buf[i] != '\n')
			return (1);
		i++;
	}
	close(fd);
	free(buf);
	return (0);
}

int	ft_verif_columns(char *argv)
{
	int	i;
	int	fd;
	int	j;
	int	c;
	int	l;

	i = 0;
	j = 0;
	c = ft_get_number_columns(argv);
	l = ft_get_number_lines(argv);
	fd = open(argv, O_RDONLY);
	ft_get_second_line(fd);
	while (i < l)
	{
		j = ft_get_next_columns(argv, fd);
		if (j != c)
			return (1);
		i++;
	}
	close(fd);
	return (0);
}

int	ft_verif_returns(char *argv)
{
	char	*buf;
	int		i;
	int		fd;
	int		size_file;
	int		ret;

	i = 0;
	ret = 0;
	size_file = ft_size_file(argv);
	fd = open(argv, O_RDONLY);
	ft_get_second_line(fd);
	buf = malloc(size_file * sizeof(char));
	if (buf == (void *)0)
		return (0);
	ret = read(fd, buf, ft_get_number_columns(argv));
	while (ret == 0)
	{
		if (buf[ret - 1] != '\n')
			return (1);
	}
	free(buf);
	close(fd);
	return (0);
}

int	ft_verif_map(char *argv)
{
	if (ft_get_number_columns(argv) < 1 || ft_get_number_lines(argv) < 1)
	{
		ft_putstr("map error\n");
		return (1);
	}
	if (ft_verif_chars(argv) == 1 || ft_verif_returns(argv) == 1)
	{
		ft_putstr("map error\n");
		return (1);
	}
	if (ft_verif_columns(argv) == 1)
	{
		ft_putstr("map error\n");
		return (1);
	}
	return (0);
}
