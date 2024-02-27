/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 20:50:47 by tuaydin           #+#    #+#             */
/*   Updated: 2024/02/27 21:34:02 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p_str;
	unsigned char	val;
	size_t			i;

	i = 0;
	val = (unsigned char)c;
	p_str = (unsigned char *)s;
	while (n && p_str[i] != val)
	{
		i++;
		n--;
	}
	if (n != 0)
		return ((void *)&p_str[i]);
	else
		return (0);
}
