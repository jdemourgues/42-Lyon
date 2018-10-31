/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memmove.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-mour <jerome@demourgues.com>           +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/31 11:50:55 by jde-mour     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/31 20:14:40 by jde-mour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s2, const void *s1, size_t len)
{
	char	*dst;
	char	*src;

	dst = (char *)s2;
	src = (char *)s1;
	if (len == 0)
		return (dst);
	if (src < dst)
	{
		while (len--)
			dst[len] = src[len];
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
