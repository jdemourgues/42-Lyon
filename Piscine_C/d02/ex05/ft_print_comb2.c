/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_comb2.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-mour <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/05 19:59:07 by jde-mour     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/05 19:59:17 by jde-mour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		print_nb(int i, int j, int k, int l)
{
	ft_putchar(i);
	ft_putchar(j);
	ft_putchar(' ');
	ft_putchar(k);
	ft_putchar(l);
	if (i != '9' || j != '8' || k != '9' || l != '9')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	return (0);
}

int		print_nb2(int k, int l, int j, int i)
{
	k = '0';
	while (k <= '9')
	{
		l = '0';
		while (l <= '9')
		{
			if ((k * 10) + l > (i * 10) + j)
				print_nb(i, j, k, l);
			l++;
		}
		k++;
	}
	return (0);
}

int		ft_print_comb2()
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = '0';
	while (i <= '9')
	{
		j = '0';
		while (j <= '9')
		{
			print_nb2(k, l, j, i);
			j++;
		}
		i++;
	}
	return (0);
}
