/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_ultimate_ft.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-mour <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/15 15:03:19 by jde-mour     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/15 15:11:28 by jde-mour    ###    #+. /#+    ###.fr     */
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

void	ft_ultimate_ft(int **********nbr)
{
	**********nbr = 42;
}

int		main(void)
{
	int nbr;
	int **********ptr_to_ptr;

	nbr = 66;
	ptr_to_ptr = &nbr;
	ft_ultimate_ft(ptr_to_nbr);
	ft_putnbr(*********ptr_to_ptr);
}

