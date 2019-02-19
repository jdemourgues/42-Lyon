/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   paramsum.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-mour <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/02/13 17:23:59 by jde-mour     #+#   ##    ##    #+#       */
/*   Updated: 2019/02/13 18:08:45 by jde-mour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr == (-2147483648))
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nbr >= 0 && nbr <= 9)
		ft_putchar(nbr + 48);
	else if (nbr < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nbr);
	}
	else
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
}

int		main(int ac, char **av)
{
	(void)av;
	ft_putnbr(ac - 1);
	ft_putchar('\n');
	return (0);
}
