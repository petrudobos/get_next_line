/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedobos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 12:31:40 by pedobos           #+#    #+#             */
/*   Updated: 2018/01/29 12:42:53 by pedobos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	fill_line(char **line, char *buff)
{
	char	*tmp;
	int	len;

	if ((tmp = ft_strchr(buff, '\n')))
	{
		*line = ft_strrealloc(*line, tmp - buff);
		ft_strncat(*line, buff, tmp - buff);
		ft_memmove(buff, tmp + 1, ft_strlen(tmp));
		return (1);
	}
	if ((len = ft_strlen(buff)))
	{
		*line = ft_strrealloc(*line, len);
		ft_strncat(*line, buff, len);
		*buff = '\0';
	}
	return (0);
}

int	get_next_line(const int fd, char **line)
{
	static char	*buf[MAX_FD];
	int 		n;

	if (fd < 0 || fd >= MAX_FD || !line || BUFF_SIZE < 1 ||
		(!buf[fd] && !(buf[fd] = ft_strnew(BUFF_SIZE))))
		return (-1);
	*line = NULL;
	if (fill_line(line, buf[fd]))
		return (1);
	while ((n = read(fd, buf[fd], BUFF_SIZE)) > 0)
	{
		buf[fd][n] = '\0';
		if (fill_line(line, buf[fd]))
			return (1);
	}
	if (*line)
		return (1);
	ft_strdel(&buf[fd]);
	if (n < 0)
		return (-1);
	return (0);
}
