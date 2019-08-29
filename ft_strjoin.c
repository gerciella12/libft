/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaidali <abaidali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/24 19:20:54 by abaidali          #+#    #+#             */
/*   Updated: 2019/08/24 20:04:53 by abaidali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *str1, char const *str2)
{
	size_t	i;
	size_t	j;
	size_t	total_len;
	char	*dest;

	if (str1 == NULL || str2 == NULL)
		return (NULL);
	total_len = ft_strlen(str1) + ft_strlen(str2) + 1;
	if ((dest = malloc(sizeof(char) * total_len)) == 0)
		return (0);
	i = 0;
	while (str1 && str1[i])
	{
		dest[i] = str1[i];
		i++;
	}
	j = 0;
	while (str2 && str2[j])
	{
		dest[i] = str2[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
