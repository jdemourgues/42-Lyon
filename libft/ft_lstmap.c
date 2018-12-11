/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstmap.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-mour <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/11 17:40:44 by jde-mour     #+#   ##    ##    #+#       */
/*   Updated: 2018/12/11 18:23:17 by jde-mour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*newlst;
	t_list	*element;

	newlst = NULL;
	if (!lst || !f)
		return (NULL);
	while (lst)
	{
		element = ft_lstnew(lst->content, lst->content_size);
		element = f(element);
		ft_lstaddend(&newlst, element);
		lst = lst->next;
	}
	return (newlst);
}
