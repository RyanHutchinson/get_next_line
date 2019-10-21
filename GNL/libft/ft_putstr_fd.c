/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhutchin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 10:22:23 by rhutchin          #+#    #+#             */
/*   Updated: 2019/05/28 16:23:25 by rhutchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(const char *str, int fd)
{
	size_t i;

	i = 0;
	if (str != NULL)
	{
		while (i < ft_strlen(str))
		{
			ft_putchar_fd(str[i], fd);
			i++;
		}
	}
}
