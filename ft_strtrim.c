/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarigul <msarigul@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 04:38:01 by msarigul          #+#    #+#             */
/*   Updated: 2022/07/18 04:38:02 by msarigul         ###   ########.TR       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_checkset(char c, char const *set)
{
	size_t	index;

	index = 0;
	while (set[index])
	{
		if (set[index++] == c)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;
	size_t	index;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_checkset(s1[start], set))
		start++;
	while (end > start && ft_checkset(s1[end - 1], set))
		end--;
	str = (char *)malloc(sizeof(char) * (end - start) + 1);
	if (!str)
		return (NULL);
	index = 0;
	while (start < end)
		str[index++] = s1[start++];
	str[index] = '\0';
	return (str);
}
// s1 in basinda ve sonunda set deki karakterler aranir
// eger bulunursa kirpilir ve yeni bir string olusturulur
// o string return edilir
//ft_checkset de karakterde string aranir.
//39 da baslangictaki karakter icin kirpma yapiyoruz
//41 de sondaki karakterler icin kirpma yapiyoruz.
// 43 de kirpmadan sonra kalan byte sayisini hesapliyoruz 
// ve yeni bir str olusturuyoruz.
// 48 de yeni str ye verileri aktiriyoruz.
// ve return ediyoruz.
