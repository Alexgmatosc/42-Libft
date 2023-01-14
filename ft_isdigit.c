/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alematos <alematos@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 11:23:43 by alematos          #+#    #+#             */
/*   Updated: 2023/01/14 13:22:11 by alematos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isdigit(char c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return(0);
}
/*
#include <stdio.h>

int main (void)
{
    char c;

    c = '5';
    printf("%i",ft_isdigit(c));
    return (0);
}
/*: