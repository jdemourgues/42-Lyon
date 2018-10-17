/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strdup.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-mour <jerome@demourgues.com>           +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/10 17:22:15 by jde-mour     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/17 17:56:30 by jde-mour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	if (!(dest = (char *)(malloc(sizeof(*src) * (ft_strlen(src) + 1)))))
		return (0);
	while (i <= ft_strlen(src))
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
