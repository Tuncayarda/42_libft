/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 12:01:58 by tuaydin           #+#    #+#             */
/*   Updated: 2024/03/30 00:42:02 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	l_len;
	size_t	i;
	size_t	j;

	i = 0;
	l_len = ft_strlen(little);
	if (l_len == 0)
		return ((char *)big);
	else if (len == 0)
		return (NULL);
	while (big[i] && i <= (len - l_len))
	{
		j = 0;
		while (big[i] == little[j] && big[i])
			j++;
		if (j == l_len)
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}
