/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   check_max.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tmezouri <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/24 16:09:51 by tmezouri     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/24 17:41:15 by tmezouri    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "lib_ft.h"

int		check_xmax(char *tab)
{
	int i;
	int xmax;

	i = 0;
	xmax = 0;
	while (tab[i] != '\n')
		i++;
	i++;
	while (tab[i] != '\n')
	{
		i++;
		xmax++;
	}
	return (xmax);
}

int		check_ymax(char *tab)
{
	int i;
	int ymax;
	
	i = 0;
	ymax = 0;
	while (tab[i])
	{
		if (tab[i] == '\n')
			ymax++;
		i++;
	}
	ymax = ymax - 1;
	return (ymax);
}
