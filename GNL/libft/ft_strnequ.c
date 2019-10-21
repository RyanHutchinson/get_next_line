/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhutchin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 14:35:41 by rhutchin          #+#    #+#             */
/*   Updated: 2019/05/23 14:41:32 by rhutchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(const char *str1, const char *str2, size_t n)
{
	if (str1 == NULL || str2 == NULL)
		return (-1);
	if (ft_strncmp(str1, str2, n) == 0)
		return (1);
	else
		return (0);
}
