/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarigul <msarigul@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 04:35:06 by msarigul          #+#    #+#             */
/*   Updated: 2022/07/18 04:35:08 by msarigul         ###   ########.TR       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//kaç adet string dizisi elemanı olduğunu hesaplar. 
//"fatih-fatih-fatih" , '-' cevap 2 dir 2 adet ayırıcı var çünkü
unsigned int	str_in_array(const char *s, char delimiter)
{
	unsigned int	qnt;

	qnt = 0;
	while (*s)
	{
		if (*s == delimiter)
			s++;
		else
		{
			while (*s != delimiter && *s)
				s++;
			qnt++;
		}
	}
	return (qnt);
}

char	**ft_split(char const *s, char c)
{
	char			**arr;
	unsigned int	j;
	unsigned int	a;

	if (!s)
		return (NULL);
	arr = (char **) ft_calloc(str_in_array(s, c) + 1, sizeof(char *));
	if (!arr)
		return (NULL);
	a = -1;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			j = 0;
			while (*s != c && *s && ++j)
				s++;
			arr[++a] = (char *) ft_calloc(j + 1, sizeof(char));
			ft_strlcpy(arr[a], s - j, j + 1);
		}
	}
	return (arr);
}
//44 de ayiriilari bulup onun icin bir string dizisi olustuyoruz.
//55. satırdaki while da ayırıcı varsa geçiyoruz. 
//57. satırda bizim string dizimizin ilk elemanına yer açıyoruz. 
//j değeri bizim stringin uzunluğu fatih mesela 5 lik alan null ile 6
// 58 da arr nin a nıncı değerine s-j diyerek oradan başladığımızı belirterek 
//j kadar yazdırıyoruz. yani fatih cil de ilkte s değeri fatih i bitirir ve
//boslukta durur. sonra j 5 olur. s - 5 diyerek, fatih in f sine geri geliriz.
// j + 1 diyerekte null ile birlikte 6 lık alana bunu yazdırır bknz ft_strlcpy.