/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memccpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-mour <jerome@demourgues.com>           +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/31 20:41:40 by jde-mour     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/01 13:11:09 by jde-mour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *str2, const void *str1, int c, size_t n)
{
	char	*src;
	char	*dest;
	size_t	i;

	if (str2 == str1 || n == 0)
		return (str2);
	i = 0;
	src = (char *)str1;
	dest = (char *)str2;
	while (i < n)
	{
		dest[i] = src[i];
		if (src[i] == c)
			return (&dest[i + 1]);
		i++;
	}
	return (NULL);
}
