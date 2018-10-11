/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_list_push_back.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-mour <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/18 20:19:56 by jde-mour     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/18 21:03:37 by jde-mour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*item;

	item = *begin_list;
	if (item)
	{
		while (item->next)
			item = item->next;
		item->next = ft_create_elem(data);
	}
	else
		item = ft_create_elem(data);
}
