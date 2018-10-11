/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   bsq.c                                            .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tmezouri <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/24 15:26:25 by tmezouri     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/26 16:09:28 by jde-mour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "lib_ft.h"
#include <fcntl.h>


int		ft_convert_file(int fd)
{
	int		ret;
	char	c;
	char	*tab;
	int i;

	i = 0;
	tab = (char*)malloc(sizeof(*tab) + 1000000);
	while ((ret = read(fd, &c, 1)))
	{
		tab[i] = c;
		printf("%c", tab[i]);
		i++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int fd;
	int i;

	i = 1;
	if (argc > 1)
		while (argv[i])
		{
			fd = open(argv[i], O_RDONLY);
			ft_convert_file(fd);
			close(fd);
			i++;
		}
	return (0);
}
