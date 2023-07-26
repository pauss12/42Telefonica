/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 22:39:09 by pmendez-          #+#    #+#             */
/*   Updated: 2023/07/23 23:06:31 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>

void	ft_open(int *fd);
void	failtests(int count, char *chain, int fd, int *total_bytes);
void	theend(int fd, int total_bytes, char *str, char *chain);

char	*filecontroller(int *num, int *total_bytes)
{
	int		fd;
	char	*chain;

	fd = 0;
	*total_bytes = 0;
	chain = malloc(*num * sizeof(char));
	ft_open(&fd);
	while (read(fd, chain, *num) != 0)
		*total_bytes += *num;
	close(fd);
	return (chain);
}

void	initializevariables(int *num, int *i, int *j, int *total_bytes)
{
	*num = 50;
	*j = 0;
	*i = 0;
	*total_bytes = 0;
}

void	fileprocessing(char *chain, int *num, int *j)
{
	free(chain);
	*j = 0;
	*num = *num + 150;
	chain = malloc((*num) * sizeof(char));
}

char	*copystr(char *chain, int *i, int *j, int num)
{
	char	*str;

	str = malloc(num * sizeof(int));
	while (*j < num)
	{
		str[*i] = chain[*j];
		(*i)++;
		(*j)++;
	}
	return (str);
}

void	readtext(int fd, int i, char *str)
{
	char	*chain;
	int		count;
	int		num;
	int		total_bytes;
	int		j;

	initializevariables(&num, &i, &j, &total_bytes);
	fd = 0;
	chain = filecontroller(&num, &total_bytes);
	ft_open(&fd);
	count = read(fd, chain, num);
	failtests(count, chain, fd, &total_bytes);
	str = copystr(chain, &i, &j, num);
	while (count != 0)
	{
		fileprocessing(chain, &num, &j);
		chain = malloc((num) * sizeof(char));
		count = read(fd, chain, num);
		str = copystr(chain, &i, &j, num);
		total_bytes += count;
	}
	theend(fd, total_bytes, str, chain);
	return (str);
}
