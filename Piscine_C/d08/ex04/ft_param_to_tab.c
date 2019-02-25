/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_param_to_tab.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-mour <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/02/25 17:12:45 by jde-mour     #+#   ##    ##    #+#       */
/*   Updated: 2019/02/25 18:49:13 by jde-mour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_par.h"

char	*ft_strdup(char *src)
{
	char	*new;
	int		i;

	if(!(new = malloc(sizeof(char))))

}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

t_stock_par		*ft_param_to_tab(int ac, char **av)
{
	int			index;
	t_stock_par	*params;

	if (!(params = (t_stock_par*)malloc(sizeof(t_stock_par) * (ac + 1))))
		return (0);
	index = 0;
	while (index < ac)
	{
		params[index].size_param = ft_strlen(av[index]);
		params[index].str = av[index];
		params[index].copy = ft_strdup(av[index]);
	}
}
