/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarigul <msarigul@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 04:27:35 by msarigul          #+#    #+#             */
/*   Updated: 2022/07/18 04:27:37 by msarigul         ###   ########.TR       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void *))
{
	t_list	*first;
	t_list	*new;

	if (lst == NULL || f == NULL)
		return (NULL);
	first = NULL;
	while (lst)
	{
		new = ft_lstnew((*f)(lst->content));
		if (!new)
		{
			ft_lstclear(&first, del);
			return (NULL);
		}
		ft_lstadd_back(&first, new);
		lst = lst->next;
	}
	return (first);
}

// lst nin tum elemanlarina f fonksiyonu uygulanir
// uygulama sonucunda olusan yeni elemanlar ile (25. satir)
// yeni bir liste olusturulur 31. satir
// gerekli durumlarda (lst bittikten sonra) veya f null dondurunce
// yeni olusturulan first degiskeninin icerisi temizlenir 
// ve  delete ile silinir.