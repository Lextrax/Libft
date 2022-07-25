/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarigul <msarigul@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 04:21:40 by msarigul          #+#    #+#             */
/*   Updated: 2022/07/18 04:22:33 by msarigul         ###   ########.TR       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*suc;

	i = 0;
	suc = (char *)s;
	while (i < n)
	{
		suc[i] = 0;
		i++;
	}
	s = suc;
}

// s dizisi n'e kadar 0(NULL) ile doldurur.
