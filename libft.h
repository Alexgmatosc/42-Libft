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


int	ft_isalpha(char c);
int ft_islanum(char c);
int ft_isdigit(char c);
int ft_isprint(char c);
size_t  ft_strlen(const char *str);
void	ft_bzero(void *s, size_t n);
int ft_isascii(int c);
int	ft_strncmp(char *s1, char *s2, unsigned int n);
int	ft_toupper(int c);
int	ft_tolower(int c);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *ptr1, const void *ptr2, size_t n);
char    *ft_strchr(const char *str, int c);
char    *ft_strrchr(const char *str, int c);



#endif