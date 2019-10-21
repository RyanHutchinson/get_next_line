/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test_out.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 12:09:18 by rhutchin          #+#    #+#             */
/*   Updated: 2019/06/21 17:52:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "fcntl.h"
#include "get_next_line.h"
#include <stdio.h>

int main(void)
{
	int fd;
	char *line;

	fd = 0;
	while(get_next_line(fd, &line) > 0)
	{
		ft_putstr(line);
	}
	return (0);
}