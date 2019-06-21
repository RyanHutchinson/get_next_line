/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhutchin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 14:22:09 by rhutchin          #+#    #+#             */
/*   Updated: 2019/05/23 14:26:13 by rhutchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *str, char (*f)(unsigned int, char))
{
	int		i;
	int		len;
	char	*new;

	if (str == NULL)
		return (NULL);
	i = 0;
	len = ft_strlen(str);
	if (!(new = ft_strnew(len)))
		return (NULL);
	while (i < len)
	{
		new[i] = f(i, str[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}
