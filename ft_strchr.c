/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alematos <alematos@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 23:08:22 by alematos          #+#    #+#             */
/*   Updated: 2023/01/27 23:08:22 by alematos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *str, int c) 
{
    while (*str != '\0') 
    {
        if (*str == c) 
        {
            return ((char *)str);
        }
        str++;
    }
    return 0;
}