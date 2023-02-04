/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alematos <alematos@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 00:17:40 by alematos          #+#    #+#             */
/*   Updated: 2023/01/28 00:17:40 by alematos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{   
	char *str2;
	int i;

	str2 = (char *)str;
	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str2[i] == (char)c)
			return (&str2[i]);
		i--;
	}
	return (0);
}