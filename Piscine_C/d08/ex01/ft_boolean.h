/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_boolean.h                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-mour <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/02/25 15:19:46 by jde-mour     #+#   ##    ##    #+#       */
/*   Updated: 2019/02/25 15:37:36 by jde-mour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef __ft_BOOLEAN_H__
#define __ft_BOOLEAN_H__

#include <unistd.h>

#define	TRUE		1
#define	FALSE		0
#define SUCCESS		0
#define EVEN_MSG	"J'ai un nombre pair d'arguments.\n"
#define ODD_MSG		"J'ai un nombre impair d'arguments.\n"
#define EVEN(x)		(!((x) % 2))

typedef	int	t_bool;
#endif
