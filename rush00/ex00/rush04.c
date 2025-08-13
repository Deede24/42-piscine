/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalbrech <lalbrech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 10:50:59 by lalbrech          #+#    #+#             */
/*   Updated: 2025/08/03 17:58:53 by lalbrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

void	ft_print_str(char *str, int size);
void	ft_putchar(char a);
void	rush(int x, int y);
void	ft_y_iteration(int x, char first, char middle, char last);

void	rush(int x, int y)
{
	int	y_cnt;

	y_cnt = 0;
	if (y < 1 || x < 1)
		ft_print_str("Invalid input, arguments must be greater than 0.\n", 49);
	else
	{
		while (y_cnt < y)
		{
			if (y_cnt == 0)
				ft_y_iteration(x, 'A', 'B', 'C');
			else if (y_cnt == y - 1)
				ft_y_iteration(x, 'C', 'B', 'A');
			else
				ft_y_iteration(x, 'B', ' ', 'B');
			y_cnt++;
			ft_putchar('\n');
		}
	}
}

void	ft_y_iteration(int x, char first, char middle, char last)
{
	int	x_cnt;

	x_cnt = 0;
	while (x_cnt < x)
	{
		if (x_cnt == 0)
			ft_putchar(first);
		else if (x_cnt == x - 1)
			ft_putchar(last);
		else
			ft_putchar(middle);
		x_cnt++;
	}
}
