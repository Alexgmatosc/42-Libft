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

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*substr;
	size_t	str_len;
	size_t	i;
	size_t	j;

	i = start;
	j = 0;
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
