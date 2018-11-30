/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_intlen.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jerome de Mourgues <jerome@demourgues.com> +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/29 17:01:42 by jde-mour     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/29 18:23:59 by jde-mour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_intlen(int num)
{
	int i;
	
	if (!num)
		return (0);
	if (num < 0)
		num = num * (-1);
	i = 0;
	while(num)
	{
		num = num / 10;
		i++;
	}
	return (i);
}
