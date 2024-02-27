/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 23:15:04 by tuaydin           #+#    #+#             */
/*   Updated: 2024/02/27 23:42:16 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	bytes;

	if (size == 0 || nmemb == 0)
	{
		size = 1;
		nmemb = 1;
	}
	bytes = nmemb * size;
	if (bytes / size != nmemb)
		return (NULL);
	ptr = (void *)malloc(bytes);
	if (ptr)
		ft_memset(ptr, 0, bytes);
	return (ptr);
}
