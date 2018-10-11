/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   lib_ft.h                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tmezouri <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/23 09:43:14 by tmezouri     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/25 14:05:29 by tmezouri    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef LIB_FT_H
# define LIB_FT_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
int		ft_convert_file(int fd);
int		check_xmax(char *tab);
int		check_ymax(char *tab);
#endif
