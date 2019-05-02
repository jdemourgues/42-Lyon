/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-mour <jde-mour@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/29 11:34:50 by jde-mour     #+#   ##    ##    #+#       */
/*   Updated: 2019/05/02 14:53:34 by jde-mour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "get_next_line.h"

int		ft_lecture(const int fd, char *buffer, char **str)
{
	int			res;
	char		*tmp;

	while (((ft_strchr(buffer, '\n') == NULL) &&
				(res = read(fd, buffer, BUFF_SIZE)) > 0))
	{
		buffer[res] = '\0';
		tmp = *str;
		*str = ft_strjoin(tmp, buffer);
		ft_strdel(&tmp);
	}
	if (buffer)
		ft_strdel(&buffer);
	if (res == -1)
		return (-1);
	return (1);
}

int		get_next_line(const int fd, char **line)
{
	char		*buffer;
	static char	*stack[5000];
	int			pr;
	char		*str;
	char		*tmp;

	buffer = ft_strnew(BUFF_SIZE);
	if (fd < 0 || line == NULL || BUFF_SIZE < 1 || buffer == NULL ||
			read(fd, *line, 0) < 0)
		return (-1);
	if (stack[fd] == NULL)
		stack[fd] = ft_strnew(1);
	if (((pr = ft_lecture(fd, buffer, &stack[fd])) == -1))
		return (-1);
	if ((str = ft_strchr(stack[fd], '\n')) != NULL)
	{
		*line = ft_strsub(stack[fd], 0, (str - stack[fd]));
		tmp = stack[fd];
		stack[fd] = ft_strdup(str + 1);
		ft_strdel(&tmp);
		return (1);
	}
	*line = ft_strdup(stack[fd]);
	stack[fd] = NULL;
	return (ft_strlen(*line) > 0 ? 1 : 0);
}