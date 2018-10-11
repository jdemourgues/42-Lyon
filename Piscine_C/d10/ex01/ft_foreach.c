/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_foreach.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-mour <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/16 20:45:10 by jde-mour     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/16 20:45:20 by jde-mour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

 void	ft_putnbr(int n);

 void ft_foreach(int *tab, int length, void(*f)(int))
 {
 	int i;

 	i = 0;
 	while (i < length)
 	{
 		f(tab[i]);
 		++i;
 	}
 }

int		main(void)
{
	int tab[5];

	tab[0] = 5;
	tab[1] = 6;
	tab[2] = 56;
	tab[3] = 1337;
	tab[4] = 486;

	
	 ft_foreach(tab, 5, &ft_putnbr);
}