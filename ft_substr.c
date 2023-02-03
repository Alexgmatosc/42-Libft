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

char *ft_substr(char const *str, unsigned int start, size_t len)
{
    char *substr = malloc(len + 1);
    size_t i = start;
    size_t j = 0;

    if (!substr)
        return(0);
    while (i < len)
    {
        substr[j] = str[i];
        i++;
        j++;
    }
    substr[j] = 0;
    return(substr);
}