/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   substring.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alematos <alematos@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 20:15:55 by alematos          #+#    #+#             */
/*   Updated: 2023/02/01 20:15:55 by alematos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_aux(unsigned int start, size_t len, char const *str)
{	
	char	*substr;
	size_t	str_len;

	str_len = ft_strlen(str);
	if (start > str_len)
	{	
		return (ft_strdup(""));
	}
	else if (!str)
		return (0);
	else if (start + len > str_len)
		len = str_len - start;
	substr = malloc(len + 1);
	return (substr);
}

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	j;

	i = start;
	j = 0;
	substr = ft_aux(start, len, str);
	if (!substr)
		return (0);
	while (j < len && str[i])
	{
		substr[j] = str[i];
		i++;
		j++;
	}
	substr[j] = 0;
	return (substr);
}
