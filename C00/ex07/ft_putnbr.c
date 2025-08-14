/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburgsta <aburgsta@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 13:10:58 by aburgsta          #+#    #+#             */
/*   Updated: 2025/08/13 17:48:07 by aburgsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define BASE 10

void	ft_putnbr(int nb);
void	ft_putchar(char c);
void	ft_putdigit(int digit);

void	ft_putnbr(int nb)
{
	long	index;
	long	working_nb;

	working_nb = nb;
	if (working_nb < 0)
	{
		working_nb *= -1;
		ft_putchar('-');
	}
	else if (working_nb == 0)
	{
		ft_putchar('0');
		return ;
	}
	index = 1;
	while (working_nb > index)
		index *= BASE;
	if ((working_nb % index == 0))
		ft_putchar('1');
	while (index > 1)
	{
		ft_putdigit((working_nb % index) / (index / BASE));
		index /= BASE;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putdigit(int digit)
{
	if (digit < 10)
		ft_putchar('0' + digit);
	else
		ft_putchar('a' + digit - 10);
}

// int	main(void)
// {
// 	// for (int i = -2147483648; i < 2147483647; i++)
// 	// {
// 	// 	ft_putnbr(i);
// 	// 	ft_putchar('\n');
// 	// }
// 	ft_putnbr(0);
// 	ft_putnbr(-42);
// 	ft_putnbr(42);
// 	ft_putnbr(-2147483648);
// 	ft_putnbr(2147483647);
// }