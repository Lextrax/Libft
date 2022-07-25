/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarigul <msarigul@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 04:29:28 by msarigul          #+#    #+#             */
/*   Updated: 2022/07/18 04:29:29 by msarigul         ###   ########.TR       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*d;
	char	*s;

	d = (char *)dest;
	s = (char *)src;
	if (dest == src)
		return (dest);
	if (s < d)
	{
		while (len--)
			*(d + len) = *(s + len);
		return (dest);
	}
	while (len--)
		*d++ = *s++;
	return (dest);
}

// int main()
// {
//  char a[] = "fatihcil";
//  printf("%s",ft_memmove((a + 2) , a, 4));
// }
// s nin adresi d den kucuk oldugunda, 
// sondan baslanir overleap sorunu olmamasi icin.
// memcpyden farki budur, 
// oyle bir sorun yoksa da direkt normal sekilde s den d ye byteleri alir.
