/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akallo <akallo@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 13:46:57 by akallo            #+#    #+#             */
/*   Updated: 2024/07/09 13:54:01 by akallo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_write_comb(int first_part, int second_part, int last)
{
	ft_putchar(48 + first_part / 10);
	ft_putchar(48 + first_part % 10);
	ft_putchar(' ');
	ft_putchar(48 + second_part / 10);
	ft_putchar(48 + second_part % 10);
	if (last == 1)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	first_part;
	int	second_part;
	int	last;

	first_part = 0;
	while (first_part <= 99)
	{
		second_part = first_part + 1;
		while (second_part <= 99)
		{
			last = !(first_part == 98 && second_part == 99);
			ft_write_comb(first_part, second_part, last);
			second_part++;
		}
		first_part++;
	}
}
