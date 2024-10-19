/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akallo <akallo@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 14:41:48 by akallo            #+#    #+#             */
/*   Updated: 2024/10/16 15:18:32 by akallo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	s1len;
	size_t	s2len;
	char	*result;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	if (!s1 || !s2)
		return (NULL);
	result = (char *)malloc(sizeof(char) * (s1len + s2len + 1));
	if (!result)
		return (NULL);
	ft_strlcpy(result, s1, s1len + 1);
	ft_strlcpy(result + s1len, s2, s2len + 1);
	result[s1len + s2len] = '\0';
	return (result);
}
