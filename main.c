/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedobos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 12:07:33 by pedobos           #+#    #+#             */
/*   Updated: 2018/01/29 14:53:46 by pedobos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(int ac, char **av)
{
	int	fd;
	int	status;
	char	*line;

	if (ac != 2)
	{
		fd = 0;
		return (2);
	}
	else
		fd = open (av[1], O_RDONLY);
	while ((status = get_next_line(fd, &line) == 1))
	{
		ft_putendl(line);
		free(line);
	}
	if (ac == 2)
		close(fd);
}
