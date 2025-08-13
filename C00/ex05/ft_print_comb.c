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

int	ft_iterate_array(char *(*array_pt), int index, char min, char max);
int	ft_is_ascending(char *array);

void	ft_print_comb(void)
{
	char	str[4];
	char	*array;
	int		i;

	str[0] = '0';
	str[1] = '1';
	str[2] = '2';
	str[3] = '\0';
	array = &str[0];
	i = 0;
	while (i < 789 - 12)
	{
		if (ft_is_ascending(array) == 0)
		{
			write(1, array, 3);
			write(1, ", ", 2);
		}
		ft_iterate_array(&array, 2, '0', '9');
		i++;
	}
	write(1, array, 3);
}

int	ft_is_ascending(char *array)
{
	while (*(array + 1) != '\0')
	{
		if (*array >= *(array + 1))
			return (-1);
		array++;
	}
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_iterate_array(char *(*array_pt), int index, char min, char max)
{
	if ((*array_pt)[index] >= max)
	{
		if (index > 0)
		{
			(*array_pt)[index] = min;
			ft_iterate_array(array_pt, index - 1, min, max);
		}
		else
			return (-1);
	}
	else
	{
		(*array_pt)[index] = (*array_pt)[index] + 1;
	}
	return (0);
}

// void	main(void)
// {
// 	ft_print_comb();
// }