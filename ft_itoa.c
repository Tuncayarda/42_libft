/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 23:52:18 by tuaydin           #+#    #+#             */
/*   Updated: 2024/02/29 00:20:57 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_get_int_size(int n)
{
	size_t	rtn;
	long	num;

	num = (long)n;
	rtn = 0;
	if (!n)
		return (1);
	else if (num < 0)
	{
		num = -num;
		rtn++;
	}
	while (num > 0)
	{
		rtn++;
		num /= 10;
	}
	return (rtn);
}

char	*ft_itoa(int n)
{
	size_t	size;
	char	*str;
	long	num;
	int		i;

	i = 0;
	num = (long)n;
	size = ft_get_int_size(n);
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (!num)
		str[0] = '0';
	if (num < 0)
	{
		num = -num;
		str[0] = '-';
	}
	while (num > 0)
	{
		str[size - 1 - i++] = num % 10 + 48;
		num /= 10;
	}
	str[size] = '\0';
	return (str);
}
