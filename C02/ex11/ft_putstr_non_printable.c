/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburgsta <aburgsta@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 18:07:38 by aburgsta          #+#    #+#             */
/*   Updated: 2025/08/13 18:19:16 by aburgsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define BASE 16

void	ft_putchar(char c);
void	ft_puthex(int working_nb);

void	ft_putstr_non_printable(char *str)
{
	while (*str != '\0')
	{
		if ((*str >= 32 && *str <= 126))
			write(1, str, 1);
		else
		{
			write(1, "\\", 1);
			ft_puthex(*str);
		}
		str++;
	}
}

void	ft_puthex(int working_nb)
{
	int		index;
	char	current_digit;

	if (working_nb < 0)
	{
		working_nb *= -1;
		ft_putchar('-');
	}
	else if (working_nb == 0)
		ft_putchar('0');
	index = BASE * BASE;
	if ((working_nb % index == 0) && !(working_nb == 0))
		ft_putchar('1');
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

// int	main(void)
// {
// 	// ft_putstr_non_printable("Hello\nHow are you?");
// 	// for (int i = 0; i < 188; i++)
// 	// {
// 	// 	ft_puthex('\n');
// 	// 	ft_putchar('\n');
// 	// }
// }