/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   rush01.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-mour <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/08 13:39:02 by jde-mour     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/08 13:39:05 by jde-mour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_ligne(int a, char c1, char c2, char c3)
{
	int cptc;

	cptc = 0;
	if (a == 1)
	{
		ft_putchar(c1);
		ft_putchar('\n');
		return ;
	}
	ft_putchar(c1);
	while (cptc++ < (a - 2))
	{
		ft_putchar(c2);
	}
	ft_putchar(c3);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int cptl;

	if (x <= 0 || y <= 0)
		return ;
	cptl = 0;
	if (y == 1)
	{
		print_ligne(x, '/', '*', '\\');
		return ;
	}
	while (cptl < y)
	{
		if (cptl == 0)
			print_ligne(x, '/', '*', '\\');
		else if (cptl == (y - 1))
			print_ligne(x, '\\', '*', '/');
		else
			print_ligne(x, '*', ' ', '*');
		++cptl;
	}
}
