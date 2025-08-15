/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburgsta <aburgsta@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 10:43:08 by aburgsta          #+#    #+#             */
/*   Updated: 2025/08/15 11:58:13 by aburgsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#define BASE 16

void	ft_putstr_non_printable(char *str);
void	ft_putchar(char c);
void	ft_puthexn(long working_nb, int digits);

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	char_cnt;
	int				col;

	printf("%i", sizeof(addr));
	char_cnt = 0;
	while (char_cnt < size)
	{
		ft_puthexn((long) addr, 16);
		write(1, ": ", 2);
		col = 0;
		while (col < 16)
		{
			break ;
		}
		break ;
	}
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
	unsigned long long int	index;
	int					i;
	char				current_digit;

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
