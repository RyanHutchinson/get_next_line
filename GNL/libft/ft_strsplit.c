/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhutchin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 08:33:50 by rhutchin          #+#    #+#             */
/*   Updated: 2019/05/28 16:08:06 by rhutchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_wordcount(const char *str, char c)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	while (str[i] != '\0')
	{
		while (str[i] == c)
			i++;
		while (str[i] != c && str[i] != '\0')
			i++;
		if (str[i] != '\0' || str[i - 1] != c)
			k++;
	}
	return (k);
}

static char	**ft_wordadd(const char *str, char c, char **new)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		k = 0;
		while (str[i] == c)
			i++;
		while (str[i + k] != c && str[i + k] != '\0')
			k++;
		if (k > 0)
			new[j] = ft_strsub(str, i, k);
		i += k;
		j++;
	}
	return (new);
}

char		**ft_strsplit(const char *str, char c)
{
	char	**new;

	if (str == NULL)
		return (NULL);
	if (!(new = (char **)malloc(sizeof(char *) * (ft_wordcount(str, c) + 1))))
		return (NULL);
	new = ft_wordadd(str, c, new);
	new[ft_wordcount(str, c)] = NULL;
	return (new);
}
