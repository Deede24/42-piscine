/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalbrech <lalbrech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 10:50:59 by lalbrech          #+#    #+#             */
/*   Updated: 2025/08/03 16:35:51 by lalbrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a);
void	rush(int col, int row);
void	ft_row_iteration(int col, char first, char middle, char last);

void	rush(int x, int y)
{
	int	row_cnt;

	if (y < 1 || x < 1)
	{
		write(1, "Invalid input, arguments must be greater than 0.\n", 49);
		return ;
	}
	row_cnt = 0;
	while (row_cnt < y)
	{
		if (row_cnt == 0)
			ft_row_iteration(x, '/', '*', '\\');
		else if (row_cnt == y - 1)
		{
			ft_row_iteration(x, '\\', '*', '/');
		}
		else
		{
			ft_row_iteration(x, '*', ' ', '*');
		}
		row_cnt++;
		ft_putchar('\n');
	}
}

void	ft_row_iteration(int col, char first, char middle, char last)
{
	int	col_cnt;

	col_cnt = 0;
	while (col_cnt < col)
	{
		if (col_cnt == 0)
		{
			ft_putchar(first);
		}
		else if (col_cnt == col - 1)
		{
			ft_putchar(last);
		}
		else
		{
			ft_putchar(middle);
		}
		col_cnt++;
	}
}
