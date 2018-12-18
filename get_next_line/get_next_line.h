/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.h                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-mour <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/17 17:41:12 by jde-mour     #+#   ##    ##    #+#       */
/*   Updated: 2018/12/18 16:50:35 by jde-mour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H


#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
# include "libft/libft.h"

#define BUFF_SIZE 4096

int		get_next_line(const int fd, char **line);

#endif
