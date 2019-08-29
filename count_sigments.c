/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_sigments.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaidali <abaidali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 17:48:50 by abaidali          #+#    #+#             */
/*   Updated: 2019/08/26 18:01:36 by abaidali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_sigments(const char *s, char c)
{
	size_t	len;
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		i += skip_delimeter(s + i, c);
		len = word_len(s + i, c);
		if (len != 0)
			count++;
		i += len;
	}
	return (count);
}
