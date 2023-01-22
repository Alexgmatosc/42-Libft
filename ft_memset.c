/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alematos <alematos@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 20:55:20 by alematos          #+#    #+#             */
/*   Updated: 2023/01/20 20:55:20 by alematos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *memset(void *ptr, int value, size_t len) 
{
    unsigned char *p;
    size_t i;

    i = 0;
    p = ptr;

    while (i < len)
    {
        *p++ = (unsigned char)value;
        i++;
    } 
    return (ptr);
}