/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_ft.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-mour <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/06 11:08:34 by jde-mour     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/06 16:36:13 by jde-mour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar((n % 10) + '0');
}

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int		main(void)
{
	int nbr;
	int *ptr_to_nbr;

	nbr = 66;
	ptr_to_nbr = &nbr;
	ft_ft(ptr_to_nbr);
	ft_putnbr(nbr);
}
