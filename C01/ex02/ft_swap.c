/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburgsta <aburgsta@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 12:22:56 by aburgsta          #+#    #+#             */
/*   Updated: 2025/08/13 18:57:31 by aburgsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
// 	int n1;
//	int	n2;
//
//	n1 = 1;
//	n2 = 2;
// 	ft_swap(&n1, &n2);
// 	printf("%i %i\n", n1, n2);
// }