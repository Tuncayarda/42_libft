/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 15:54:40 by tuaydin           #+#    #+#             */
/*   Updated: 2024/03/02 11:22:46 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*l_ptr;

	if (!lst || !f)
		return ;
	l_ptr = lst;
	while (l_ptr != NULL)
	{
		f(l_ptr->content);
		l_ptr = l_ptr->next;
	}
}
