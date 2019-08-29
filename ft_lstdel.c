/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaidali <abaidali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/24 19:41:28 by abaidali          #+#    #+#             */
/*   Updated: 2019/08/24 19:41:33 by abaidali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *current;

	if (alst == NULL || del == NULL)
		return ;
	current = *alst;
	if (current)
	{
		del(current->content, current->content_size);
		if (current->next)
			ft_lstdel(&current->next, del);
		free(current);
	}
	*alst = NULL;
}
