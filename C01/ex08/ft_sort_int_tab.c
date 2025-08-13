/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburgsta <aburgsta@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 13:54:11 by aburgsta          #+#    #+#             */
/*   Updated: 2025/08/13 15:22:41 by aburgsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size);
void	ft_swap(int *a, int *b);

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (*(tab + j) > *(tab + j + 1))
			{
				ft_swap(tab + j, tab + j + 1);
			}
			j++;
		}
		i++;
	}
}

void	ft_swap(int *a, int *b)
{
	int	new_a;
	int	new_b;

	new_a = *b;
	new_b = *a;
	*a = new_a;
	*b = new_b;
}

// #include <stdio.h>
//
// int	main(void)
// {
// 	int array[] = {3, 2, 1, 5, 4};
//
// 	ft_sort_int_tab(array, 5);
// 	for (int i; i < 5; i++)
// 	{
// 		printf("%i ", array[i]);
// 	}
// }