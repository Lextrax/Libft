/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarigul <msarigul@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 04:27:55 by msarigul          #+#    #+#             */
/*   Updated: 2022/07/18 04:27:57 by msarigul         ###   ########.TR       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
// BU BIR BAGLI LISTEDIR.
//fonksiyon cagrildiginda verilen icerik (content)
//structimizin content bolumune kaydedilir.
// ilk olusturuldugu icinde next degeri NULL dur
// ve olusturulan yeni struct return edilir.
