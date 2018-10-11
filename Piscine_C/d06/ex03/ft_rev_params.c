/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_rev_params.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-mour <jde-mour@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/11 19:44:00 by jde-mour     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/11 19:44:00 by jde-mour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int index;

	index = -1;
	while (str[++index] != '\0')
		ft_putchar(str[index]);
}

int		main(int argc, char **argv)
{
	int i;

	i = argc - 1;
	while ((i <= argc && i > 0))
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		--i;
	}
}
