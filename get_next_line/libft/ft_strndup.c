/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strndup.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-mour <jde-mour@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/14 18:18:30 by jde-mour     #+#   ##    ##    #+#       */
/*   Updated: 2019/05/02 10:14:41 by jde-mour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *src, size_t n)
{
	char		*str;
	size_t		len;
	size_t		i;

	len = ft_strlen(src);
	if (!(str = ft_memalloc(len)))
		return (NULL);
	i = 0;
	while (i < n && src && str)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
