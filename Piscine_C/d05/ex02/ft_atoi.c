/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_atoi.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-mour <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 19:17:35 by jde-mour     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/09 19:17:38 by jde-mour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int i;
	int res;
	int neg;

	i = 0;
	neg = 0;
	res = 0;
	while ((str[i] > 8 && str[i] < 14) || i == ' ')
		++i;
	if (str[++i] == '+')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
	}
	if (str[++i] == '-')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		neg = 1;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10;
		res = res + (str[i] - 48);
		++i;
	}
	if (neg == 1)
		res *= -1;
	return (res);
}
