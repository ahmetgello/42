/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akallo <akallo@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 13:56:32 by akallo            #+#    #+#             */
/*   Updated: 2024/10/13 11:01:31 by akallo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!needle)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (needle [j] && haystack[i + j] == needle[j] && i + j < len)
		{
			j++;
		}
		if (needle[j] == '\0')
		{
			return ((char *)haystack + i);
		}
		i++;
	}
	return (NULL);
}
