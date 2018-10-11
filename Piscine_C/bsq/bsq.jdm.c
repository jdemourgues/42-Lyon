/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   bsq.c                                            .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tmezouri <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/24 15:26:25 by tmezouri     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/25 14:02:49 by tmezouri    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "lib_ft.h"
#include <fcntl.h>


int		ft_convert_file(int fd)
{
	int		ret;
	char	c;
	char	**tab;
	char	*tab1
	int len_ligne;
	int len_colonne;
	int i;
	int j;

	/* len_ligne = ft_strlen(1ere ligne de l'input file)*/
	len_colonne = read(fd, &c, 1);
	if(!tab1 = (char*)malloc(len_ligne * sizeof(*tab1) + 1))
		return (1);
	j = 0;
	while (j < len_colonne)
	{
		if(!tab[j] = (char*)malloc(len_colonne * sizeof(*tab[j])))
			return (1);
	}
	i = 0;
	while ((ret = read(fd, &c, 1)))
	{
		tab[i] = c;
		write(1, &tab[i], 1);
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
