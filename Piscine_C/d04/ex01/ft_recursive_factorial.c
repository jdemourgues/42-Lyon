/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_recursive_factorial.c                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-mour <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/07 16:56:02 by jde-mour     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/07 16:56:05 by jde-mour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
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
	{
		res = res * ft_recursive_factorial(nb - 1);
	}
	return (res);
}
