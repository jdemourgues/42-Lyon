/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-mour <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/17 17:38:16 by jde-mour     #+#   ##    ##    #+#       */
/*   Updated: 2018/12/18 16:54:47 by jde-mour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(const int fd, char **line)
{
	int		ret;
	char	buf[BUFF_SIZE + 1];

	ret = read(fd, buf, BUFF_SIZE);
	buf[ret] = '\0';
	*line = buf;
	return (ret);
}

int		main(int argc, char **argv)
{
	int		fd;
	char	*line;

	if (argc != 2)
	{
		ft_putstr("invalid parameters\n");
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("open() failed\n");
		return (1);
	}
	get_next_line(fd, &line);
	ft_putstr(line);
	if (close(fd) == -1)
	{
		ft_putstr("close() failed\n");
		return (1);
	}
	return (0);
}
