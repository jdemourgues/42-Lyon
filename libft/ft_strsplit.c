/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strsplit.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-mour <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/26 15:31:58 by jde-mour     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/27 13:17:08 by jde-mour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**res;
	int		i;
	int		word_num;

	if (!(res = (char **)malloc(sizeof(char *) * (ft_words_count(s, c) + 1)))
			|| !s)
		return (NULL);
	i = 0;
	word_num = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (!s[i])
			break ;
		res[word_num] = ft_strsub(s, i, ft_word_len(s + i, c));
		word_num++;
		i = i + ft_word_len(s + i, c);
	}
	res[word_num] = 0;
	return (res);
}
