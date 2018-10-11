/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_interqtive_factorial.c                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-mour <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/07 15:43:38 by jde-mour     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/07 15:43:41 by jde-mour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int res;

	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0)
	{
		res = 1;
		return (res);
	}
	res = nb;
	while (nb > 1)
	{
		res = res * (nb - 1);
		--nb;
	}
	return (res);
}
