/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburgsta <aburgsta@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 11:20:22 by aburgsta          #+#    #+#             */
/*   Updated: 2025/08/12 11:20:22 by aburgsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(int nbr1, int nbr2);
void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 99)
	{
		j = 1;
		while (j <= 99)
		{
			if (i < j)
			{
				ft_print_numbers(i, j);
			}
			j++;
		}
		i++;
	}
}

void	ft_print_numbers(int nbr1, int nbr2)
{
	if (nbr1 > 0 || nbr2 > 1)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	ft_putchar('0' + nbr1 / 10);
	ft_putchar('0' + nbr1 % 10);
	ft_putchar(' ');
	ft_putchar('0' + nbr2 / 10);
	ft_putchar('0' + nbr2 % 10);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// int	main(void)
// {
// 	ft_print_comb2();
// }