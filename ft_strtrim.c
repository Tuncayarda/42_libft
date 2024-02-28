/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 21:08:56 by tuaydin           #+#    #+#             */
/*   Updated: 2024/02/29 00:22:13 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		first;
	int		last;
	char	*str;

	if (!s1)
		return (0);
	if (!set)
		return (ft_strdup(s1));
	first = 0;
	while (s1[first] && ft_strchr(set, s1[first]))
		first++;
	last = (ft_strlen(s1) - 1);
	while (s1[last] && ft_strchr(set, s1[last]))
		last--;
	str = ft_substr(s1, first, last - first + 1);
	return (str);
}
