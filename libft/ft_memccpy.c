/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memccpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-mour <jerome@demourgues.com>           +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/31 20:41:40 by jde-mour     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/07 15:06:54 by jde-mour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *str2, const void *str1, int c, size_t n)
{
	unsigned const char	*src;
	unsigned char		*dest;
	size_t				i;

	i = 0;
	src = (unsigned const char *)str1;
	dest = (unsigned char *)str2;
	while (i < n)
	{
		dest[i] = src[i];
		if (src[i] == (unsigned char)c)
			return (&dest[i + 1]);
		i++;
	}
	return (NULL);
}
