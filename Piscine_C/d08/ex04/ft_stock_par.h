/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_stock_par.h                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-mour <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/02/25 16:59:55 by jde-mour     #+#   ##    ##    #+#       */
/*   Updated: 2019/02/25 17:11:53 by jde-mour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef __FT_STOCK_PAR_H__
#define __FT_STOCK_PAR_H__

typedef	struct	s_stock_par
{
	int		size_param;
	char	*str;
	char	*copy;
	char	**tab;
}					t_stock_par;

t_stock_par	*ft_param_to_tab(int ac, char **av);

char		**ft_split_whitespaces(char *str);

#endif
