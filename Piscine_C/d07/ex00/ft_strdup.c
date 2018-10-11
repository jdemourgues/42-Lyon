/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strdup.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-mour <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/12 21:25:20 by jde-mour     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/12 21:25:33 by jde-mour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_strdup(char *src)
{
	int		len;
	char	*str;
	int		i;

	len = 0;
	while (src[len])
		++len;
	str = malloc(sizeof(*str) * (len + 1));
	if str == NULL
		return (1);
	i = -1;
	while (++i < len)
		str[i] = src[i];
	return (str);
}
