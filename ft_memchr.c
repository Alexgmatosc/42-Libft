/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alematos <alematos@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 22:39:49 by alematos          #+#    #+#             */
/*   Updated: 2023/01/27 22:39:49 by alematos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
    size_t			i;
    unsigned char	*str;

    i = 0;
    str = (unsigned char *)s;
    while (i < n)
    {
        if (str[i] == (unsigned char)c)
            return (str + i);
        i++;
    }
    return (0);
}