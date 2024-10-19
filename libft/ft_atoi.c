/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akallo <akallo@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 10:49:11 by akallo            #+#    #+#             */
/*   Updated: 2024/10/12 15:26:36 by akallo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	i;
	int	negative;

	i = 0;
	result = 0;
	negative = 1;
	while ((str[i] >= 9 && str[i] >= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			negative *= -1;
		i++;
	}
	while (str[i])
	{
		result = result * 10;
		result += str[i] - '0';
		i++;
	}
	return (result * negative);
}
