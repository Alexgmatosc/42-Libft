/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alematos <alematos@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 21:32:15 by alematos          #+#    #+#             */
/*   Updated: 2023/02/27 20:07:34 by alematos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free(char **out, int j)
{
	while (j > 0)
		free(out[--j]);
	free(out);
}

static char	**ft_strmatrix(char const *s, size_t i, char **out, char c)
{
	size_t	start;
	size_t	j;

	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if ((i - start) > 0)
		{
			out[j] = ft_substr(s, start, (i - start));
			if (!out[j])
			{
				ft_free(out, j);
				return (NULL);
			}
			j++;
		}
	}
	out[j] = NULL;
	return (out);
}

static int	ft_word_counter(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			j++;
		i++;
	}
	return (j);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	char	**out;

	if (!s)
		return (NULL);
	out = (char **)malloc(sizeof(char *) * (ft_word_counter(s, c) + 1));
	if (!out)
		return (NULL);
	i = 0;
	return (ft_strmatrix(s, i, out, c));
}
