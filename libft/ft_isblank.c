/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_isblank.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-mour <jerome@demourgues.com>           +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/15 17:59:54 by jde-mour     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/15 18:03:26 by jde-mour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_isblank(int c)
{
	return ((c == 9 || c == 13));
}
