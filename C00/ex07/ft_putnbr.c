/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburgsta <aburgsta@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 13:10:58 by aburgsta          #+#    #+#             */
/*   Updated: 2025/08/13 14:46:23 by aburgsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putnbr(int nb);
void		ft_putchar(char c);

void	ft_putnbr(int nb)
{
	long int	index;
	long int	working_nb;

	working_nb = nb;
	if (working_nb == 0)
	{
		ft_putchar('0');
		return ;
	}
	if (working_nb < 0)
	{
		working_nb *= -1;
		ft_putchar('-');
	}
	index = 1;
	while (working_nb > index)
	{
		index *= 10;
	}
	while (index > 1)
	{
		ft_putchar('0' + ((working_nb % index) / (index / 10)));
		index /= 10;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// void	main(void)
// {
// 	ft_putnbr(0);
// 	ft_putnbr(-42);
// 	ft_putnbr(42);
// 	ft_putnbr(-2147483648);
// 	ft_putnbr(2147483647);
// }