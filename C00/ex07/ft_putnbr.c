/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburgsta <aburgsta@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 13:10:58 by aburgsta          #+#    #+#             */
/*   Updated: 2025/08/12 17:14:47 by aburgsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putnbr(int nb);
void		ft_putchar(char c);
long int	ft_pow(int base, int exponent);

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

long int	ft_pow(int base, int exponent)
{
	int	n;
	int	i;

	n = 1;
	i = 0;
	while (i < exponent)
	{
		n *= base;
		i++;
	}
	return (n);
}
