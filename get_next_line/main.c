/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-mour <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/04/30 13:58:22 by jde-mour     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/30 14:05:24 by jde-mour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
int	main(int argc, char **argv)
{
	int		fd;
	char	*line;
	int		ret;
	int		i;

	if (argc >= 2){
		if (access(argv[1], F_OK) == 0){
			i = 0;
			fd = open(argv[1], O_RDONLY);
			while((ret = get_next_line(fd, &line)) == 1){
				i++;
				printf("MAIN:%d, line>%s\n", ret, line);
			}
			close(fd);
		}
	}
	return (0);
}
