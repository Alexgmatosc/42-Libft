/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alematos <alematos@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 15:05:27 by alematos          #+#    #+#             */
/*   Updated: 2023/01/30 15:05:27 by alematos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
    char	*str;
    int		i;

    i = 0;
    str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
    if (str == 0)
        return (0);
    while (s1[i] != 0)
    {
        str[i] = s1[i];
        i++;
    }
    str[i] = 0;
    return (str);
}