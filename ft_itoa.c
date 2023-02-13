/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alematos <alematos@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 15:47:57 by alematos          #+#    #+#             */
/*   Updated: 2023/02/13 20:03:15 by alematos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_digit_count(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		count++;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		sign;

	len = ft_digit_count(n);
 	printf("len = %d\n", len);
	sign = 1;
	if (n < 0)
		sign = -1;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	printf("origen = %p\n", str);
	str[len] = '\0';
	printf("NULL = %p\n", str + len);
	while (len > 0)
	{
		str[len - 1] = (n % 10) * sign + '0';
		n /= 10;
		len--;
		printf("iter = %p\n", str + len);
	}
	if (sign == -1)
		str[0] = '-';
	return (str);
}
