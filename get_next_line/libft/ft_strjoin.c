/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoin.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-mour <jerome@demourgues.com>           +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/13 18:57:49 by jde-mour     #+#   ##    ##    #+#       */
/*   Updated: 2018/12/11 20:46:39 by jde-mour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	size_t	len;
	int		i;
	int		j;

	i = -1;
	j = -1;
	if (!s1 || !s2)
		return (NULL);
	len = (ft_strlen(s1) + ft_strlen(s2));
	if (!(dest = (ft_strnew(len))))
		return (NULL);
	else if (len > 0)
	{
		while (s1[++i] != '\0')
			dest[i] = s1[i];
		while (s2[++j] != '\0')
		{
			dest[i] = s2[j];
			i++;
		}
	}
	return (dest);
}
