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

/*
This function works, but it takes 12 seconds and moulinette will timeout it.
This might be solved by inserting a check in line 45, to break the while loop
when the last number to be printed is reached.
*/

void	ft_print_combn(int n)
{
	char	str[9];
	char	*array;
	int		i;

	i = 0;
	while (i < n)
	{
		str[i] = '0' + i;
		i++;
	}
	str[n] = '\0';
	array = &str[0];
	i = 0;
	write(1, array, n);
	while (i > -1)
	{
		i *= ft_iterate_array(&array, n - 1, '0', '9');
		if (ft_is_ascending(array) == 0)
		{
			write(1, ", ", 2);
			write(1, array, n);
		}
		i++;
	}
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
	return (1);
}

// int	main(void)
// {
// 	ft_print_comb(2);
// 	ft_print_comb(3);
// 	ft_print_comb(5);
// 	ft_print_comb(9);
// }