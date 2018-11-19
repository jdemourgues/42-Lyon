/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-mour <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/14 10:39:33 by jde-mour     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/19 17:32:10 by jde-mour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int	start;
	int end;

	start = 0;
	end = ft_strlen((char *)s);
	while (ft_isblank(s[start]))
		start++;
	while (ft_isblank(s[end]))
		end--;
	return(ft_strsub(s, start, end - start));
}	
