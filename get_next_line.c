/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhutchin <rhutchin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 10:42:18 by rhutchin          #+#    #+#             */
/*   Updated: 2019/06/25 12:01:51 by rhutchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static void	reader(const int fd, char **fd_arr)
{
	char			*tmp;
	char			buff[BUFF_SIZE + 1];
	int				ret;

	while (ft_strchr(fd_arr[fd], '\n') == NULL)
	{
		if ((ret = read(fd, buff, BUFF_SIZE)) == 0)
			break ;
		buff[ret] = '\0';
		tmp = ft_strjoin(fd_arr[fd], buff);
		ft_strdel(&fd_arr[fd]);
		fd_arr[fd] = ft_strdupdel(&tmp);
	}
}

int		get_next_line(const int fd, char **line)
{
	char			buff[BUFF_SIZE + 1];
	static char		*fd_arr[1024];
	char			*tmp;
	char			*tmp2;

	if (fd < 0 || read(fd, buff, 0) < 0 || !line)
		return (-1);
	if (fd_arr[fd] == NULL)
		fd_arr[fd] = ft_strnew(0);
	reader(fd, fd_arr);
	if (ft_strchr(fd_arr[fd], '\n') != NULL)
	{
		tmp = ft_strdupdel(&fd_arr[fd]);
		tmp2 = ft_replacechr(&tmp, '\n', '\0');
		fd_arr[fd] = ft_strdup(tmp2 + 1);
		*line = ft_strdupdel(&tmp);
	}
	else if (ft_strlen(fd_arr[fd]) != 0)
		*line = ft_strdupdel(&fd_arr[fd]);
	else
		return (0);
	return (1);
}
