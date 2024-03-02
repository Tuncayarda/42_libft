/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 18:14:24 by tuaydin           #+#    #+#             */
/*   Updated: 2024/02/29 18:34:01 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*l_ptr;

	if (!lst || !(*lst))
	{
		*lst = new;
		return ;
	}
	l_ptr = ft_lstlast(*lst);
	(l_ptr)->next = new;
}
