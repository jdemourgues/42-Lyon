/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   fprime.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-mour <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/02/19 14:25:00 by jde-mour     #+#   ##    ##    #+#       */
/*   Updated: 2019/02/19 15:51:25 by jde-mour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

 void	ft_decompose(unsigned long long int n){
	int i;
	
	if (n == 1) {
		printf("1");
		return ;
	}

	i = 2;
	while (n > 1){
		while ( n % i == 0 ) {
			printf("%d",i);
			n = n / i;
			if (n != 1)
				printf("*");
		}
		i = i + 1;
	}
 }

int		main(int ac, char **av){
	if(ac != 2) {
		printf("\n");
		return (1);
	}

	ft_decompose(atoi(av[1]));
	printf("\n");
	return (0);
}
