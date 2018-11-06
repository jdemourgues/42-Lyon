/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strmap.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-mour <jerome@demourgues.com>           +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/06 17:47:41 by jde-mour     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/06 18:16:08 by jde-mour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*res;
	int		i;

	if (!s || !f)
		return (NULL);
	if (!(res = (char *)ft_memalloc(sizeof(char) * (ft_strlen((char *)s) + 1))))
		return (NULL);
	i = 0;
	while (s[i])
	{
		res[i] = f(s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
