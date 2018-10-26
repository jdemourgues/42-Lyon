/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnstr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-mour <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/23 09:28:17 by jde-mour     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/26 15:17:37 by jde-mour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;
	size_t needle_len;

	needle_len = ft_strlen((char *)needle);
	if (needle_len == 0)
		return ((char *)haystack);
	i = 0;
	j = 0;
	while (haystack[i] && i < (len))
	{
		while (haystack[i + j] == needle[j] && (i + j) < len)
		{
			if (j == needle_len - 1 && j < (len))
				return ((char*)&haystack[i]);
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
