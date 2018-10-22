/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strrchr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-mour <jerome@demourgues.com>           +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/18 19:17:33 by jde-mour     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/22 10:55:27 by jde-mour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *src, int c)
{
	int i;

	i = ft_strlen((char *)src);
	while (i > 0)
	{
		if (src[i] == (char)c)
			return ((char *)src + i);
		--i;
	}
	if (src[i] == (char)c)
		return ((char *)src + i);
	return (NULL);
}
