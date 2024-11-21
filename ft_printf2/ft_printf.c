/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akallo <akallo@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 12:06:45 by akallo            #+#    #+#             */
/*   Updated: 2024/11/07 14:27:22 by akallo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_conversion(const char type, va_list vargs)
{
	if (type == 'c')
		return (ft_putchar(va_arg(vargs, int)));
	else if (type == 'u')
		return (ft_putnbr(va_arg(vargs, unsigned int)));
	else if ((type == 'i') || (type == 'd'))
		return (ft_putnbr(va_arg(vargs, int)));
	else if (type == 's')
		return (ft_putstr(va_arg(vargs, char *)));
	else if (type == 'x' || type == 'X')
		return (ft_putnbr_hexa(va_arg(vargs, unsigned int), type));
	else if (type == 'p')
		return (ft_putptr(va_arg(vargs, void *)));
	else if (type == '%')
		return (ft_putchar('%'));
	return (-1);
}

int	ft_printf(char const *str, ...)
{
	va_list	vargs;
	int		len;
	int		check;

	va_start(vargs, str);
	len = 0;
	while (*str)
	{
		if (*str == '%')
		{
			check = ft_conversion(*(++str), vargs);
			if (check == -1)
				return (-1);
			len += check;
		}
		else
		{
			if (write(1, str, 1) == -1)
				return (-1);
			len++;
		}
		str++;
	}
	va_end(vargs);
	return (len);
}
#include <stdio.h>
 
int main()
{
	// printf("%c\n", 'a');
	// ft_printf("%c\n", 'a');

	// printf("%s\n", "ahmet");
	// ft_printf("%s\n", "ahmet");
	
	// void *ptr;
	// printf("%p\n", ptr);
	// ft_printf("%p\n", ptr);

	// printf("%d\n", 3);
	// ft_printf("%d\n", 3);

	// printf("%i\n", 4);
	// ft_printf("%i\n", 4);

	// printf("%u\n", 100);
	// ft_printf("%u\n", 100);

	// printf("%x\n", 32);
	// ft_printf("%x\n", 32);

	// printf("%X\n", 254);
	// ft_printf("%X\n", 254);

	// printf("%%\n");
	// ft_printf("%%\n");

	printf("%0\n");
	// ft_printf("%0\n");
}