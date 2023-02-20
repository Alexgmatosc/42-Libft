/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alematos <alematos@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 18:51:18 by alematos          #+#    #+#             */
/*   Updated: 2023/02/20 20:32:26 by alematos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int ft_counter(char const *s, char c)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(s)
	{
	while(s[i] == c)
		{
			i++;
			j++;
		while(s[i] != c)
		i++;
		
		}
	j++;	
	return (j);
	}
}
char	**ft_split(char const *s, char c)
{
	int	i;
	int d;
	int	j;
	char **out;
	char *sub;
	int *str;

	d = 0;
	i = 0;





	out = (char**)ft_calloc((d + 1), sizeof(char*));
	while (s[i])
	{
		while(s[i] == c)
		{
			i++;
			if (s[i] == '\0')
				break;
		}
		d = i;
		while(s[i] != c && s[i])
		{
			i++;
		}
		d++;
	}

	

	

int	main(void)
{
	char const *s;
	char c;

	c = 'H';
	s = "olaHcacaHojoHHHlo";
	/* printf("%s", ft_strchr("hola munlafdsladsf", 'l')); */
	/* printf("%s", ft_split(s, c)); */
	ft_split(s, c);
	return (0);
}