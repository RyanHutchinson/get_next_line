/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhutchin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 15:34:51 by rhutchin          #+#    #+#             */
/*   Updated: 2019/05/29 11:07:10 by rhutchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f) (t_list *elem))
{
	t_list *new;
	t_list *scanner;

	if (lst == NULL || f == NULL)
		return (NULL);
	scanner = f(lst);
	new = scanner;
	while (lst->next != NULL)
	{
		scanner->next = f(lst->next);
		scanner = scanner->next;
		lst = lst->next;
	}
	return (new);
}
