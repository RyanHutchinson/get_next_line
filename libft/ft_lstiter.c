/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhutchin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 15:24:17 by rhutchin          #+#    #+#             */
/*   Updated: 2019/05/27 15:59:57 by rhutchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f) (t_list *elem))
{
	t_list	*ptr;
	t_list	*ptrnxt;

	ptr = lst;
	if (lst != NULL)
	{
		while (ptr->next != NULL)
		{
			ptrnxt = ptr->next;
			f(ptr);
			ptr = ptrnxt;
		}
		f(ptr);
	}
}
