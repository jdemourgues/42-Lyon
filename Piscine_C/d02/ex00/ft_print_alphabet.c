/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   jour2.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-mour <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/04 16:29:05 by jde-mour     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/04 16:43:45 by jde-mour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	int i;

	i = 97;
	while (i < 123)
	{
		ft_putchar(i);
		++i;
	}
}