/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-mour <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/17 14:51:49 by jde-mour     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/17 15:03:20 by jde-mour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t len)
{
	int		i;
	size_t	j;

	i = ft_strlen(dest);
	j = 0;
	while (src[j] && j < len)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	while (dest[i])
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
