/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alematos <alematos@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:47:02 by alematos          #+#    #+#             */
/*   Updated: 2023/01/17 12:47:02 by alematos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H


#include <stddef.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

int	ft_isalpha(char c);
int ft_isanum(char c);
int ft_isdigit(char c);
int ft_isprint(char c);
size_t  ft_strlen(const char *str);



#endif