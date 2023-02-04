/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alematos <alematos@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 22:04:39 by alematos          #+#    #+#             */
/*   Updated: 2023/02/04 10:44:58 by alematos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
size_t i;
size_t j;

if (!s1 || !set)
    return (0);
i = 0;
while (s1[i] && ft_strchr(set, s1[i]))
    i++;
j = ft_strlen(s1);
while (j > i && ft_strchr(set, s1[j]))
    j--;
return (ft_substr(s1, i, j - i + 1));
}
