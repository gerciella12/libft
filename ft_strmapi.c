/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaidali <abaidali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/24 19:21:45 by abaidali          #+#    #+#             */
/*   Updated: 2019/08/24 19:54:46 by abaidali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	len;
	char			*dest;

	if (s == 0)
		return (0);
	len = 0;
	while (s[len])
		len++;
	dest = malloc(len + 1);
	if (dest == 0)
		return (0);
	len = 0;
	while (s[len])
	{
		dest[len] = f(len, s[len]);
		len++;
	}
	dest[len] = 0;
	return (dest);
}
