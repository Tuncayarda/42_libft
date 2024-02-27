/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 20:16:06 by tuaydin           #+#    #+#             */
/*   Updated: 2024/02/27 20:36:38 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*p_dest;
	unsigned char	*p_src;

	if (!dest && !src)
		return (dest);
	if (src > dest)
	{
		dest = ft_memcpy(dest, src, n);
		return (dest);
	}
	else
	{
		p_dest = (unsigned char *)dest;
		p_src = (unsigned char *)src;
		while (n--)
			p_dest[n] = p_src[n];
		return (dest);
	}
}
