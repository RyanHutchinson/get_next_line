/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhutchin <rhutchin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 12:09:18 by rhutchin          #+#    #+#             */
/*   Updated: 2019/06/20 14:45:29 by rhutchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "fcntl.h"
#include "get_next_line.h"

int main(int ac, char **av)
{
	if(ac < 1)
		return (0);
	int fd;
	char *line;

	fd = open(av[1], O_RDONLY);
	while(get_next_line(fd, &line) > 0)
	{
		ft_putstr(line);
		ft_putchar('\n');
	}
	close(fd);

	return (0);
}