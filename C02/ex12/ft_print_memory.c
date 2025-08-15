/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburgsta <aburgsta@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 10:43:08 by aburgsta          #+#    #+#             */
/*   Updated: 2025/08/15 11:04:56 by aburgsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define BASE 16

void	ft_putstr_non_printable(char *str);
void	ft_putchar(char c);
void	ft_puthexn(long working_nb, int digits);

void	*ft_print_memory(void *addr, unsigned int size)
{
	ft_puthexn((long) addr, size);
	return (addr);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str >= ' ' && *str <= '~')
			write(1, str, 1);
		else
			write(1, ".", 1);
		str++;
	}
}

void	ft_puthexn(long working_nb, int digits)
{
	long	index;
	int		i;
	char	current_digit;

	if (working_nb < 0)
	{
		working_nb *= -1;
		ft_putchar('-');
	}
	index = 1;
	i = 0;
	while (i++ < digits)
		index *= BASE;
	while (index > 1)
	{
		current_digit = ((working_nb % index) / (index / BASE));
		if (current_digit < 10)
			ft_putchar('0' + current_digit);
		else
			ft_putchar('a' + current_digit - 10);
		index /= BASE;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	char	*str;

	str = "Hello World";
	ft_print_memory(str, 12);
}