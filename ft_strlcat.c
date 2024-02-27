/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 11:10:03 by tuaydin           #+#    #+#             */
/*   Updated: 2024/02/26 11:17:43 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d_curs;
	size_t	s_curs;
	size_t	d_len;
	size_t	s_len;

	d_curs = 0;
	s_curs = 0;
	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	if (size == 0 || size <= d_len)
		return (size + s_len);
	while (dst[d_curs])
		d_curs++;
	while (s_curs < size - d_len - 1 && src[s_curs])
		dst[d_curs++] = src[s_curs++];
	dst[d_curs] = '\0';
	return (d_len + s_len);
}
