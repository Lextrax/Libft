/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarigul <msarigul@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 04:25:12 by msarigul          #+#    #+#             */
/*   Updated: 2022/07/18 04:25:14 by msarigul         ###   ########.TR       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	if (*lst == NULL)
		*lst = new;
	else
	{
		ptr = *lst;
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = new;
	}
}

//19da lst bos ise direkt ilk eleman new atanir.
//24de  ptr nin en sonuna dek gider ptr next null oldugunda 
// 26 da new parametresi en sona atanir ve new in nexti null yapilir.
// cunku new->next null olmali en sona new.
