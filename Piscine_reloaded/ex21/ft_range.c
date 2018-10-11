/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_range.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-mour <jerome@demourgues.com>           +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/10 18:46:02 by jde-mour     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/10 19:00:47 by jde-mour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *res;
	int i;

	i = 0;
	if (min >= max)
		return (NULL);
	if (!(res = (int *)(malloc(sizeof(*res) * (max - min)))))
		return (0);
	while (i < (max - min))
	{
		res[i] = (min + i);
		i++;
	}
	return (res);
}
