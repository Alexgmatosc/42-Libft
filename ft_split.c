/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alematos <alematos@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 21:32:15 by alematos          #+#    #+#             */
/*   Updated: 2023/02/18 21:32:15 by alematos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_counter(char const *s, char c)
{
	int i;
	int j;

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
	size_t	j;
	size_t	start;
	char	**out;

	if (!s)
		return (0);
	out = (char **)malloc(sizeof(char *) * (ft_word_counter(s, c) + 1));
	if (!out)
		return (0);
	i = 0;
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
				free(out);
				return (0);
			}
			j++;
		}
	}
	out[j] = 0;
	return (out);
}

/* int main(void)
{
    char const *s = "hola,mundo,como,estas";
    char c = ',';

    // Llamamos a la función ft_split y guardamos su resultado en la variable words
    char **words = ft_split(s, c);

    // Imprimimos cada palabra del array de palabras
    for (int i = 0; words[i]; i++)
    {
        printf("%s\n", words[i]);
    }

    // Liberamos la memoria asignada a cada palabra y al array de palabras
    for (int i = 0; words[i]; i++)
    {
        free(words[i]);
    }
    free(words);

    return 0;
} */