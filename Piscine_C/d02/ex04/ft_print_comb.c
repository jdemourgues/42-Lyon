/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_comb.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-mour <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/05 19:37:51 by jde-mour     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/05 19:38:01 by jde-mour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		print_nb(int f, int s, int t)
{
	ft_putchar(f);
	ft_putchar(s);
	ft_putchar(t);
	if (f != '7' || s != '8' || t != '9')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	return (0);
}

int		ft_print_comb(void)
{
	char i;
	char j;
	char k;

	i = '0';
	while (i <= '9')
	{
		j = i + 1;
		while (j <= '9')
		{
			k = j + 1;
			while (k <= '9')
			{
				print_nb(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
	ft_putchar('\n');
	return (0);
}
