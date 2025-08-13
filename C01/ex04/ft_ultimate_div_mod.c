/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburgsta <aburgsta@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 12:30:36 by aburgsta          #+#    #+#             */
/*   Updated: 2025/08/13 15:17:01 by aburgsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

// #include <stdio.h>
//
// int	main(void)
// {
// 	int n1;
//	int	n2;
//
//	int	n1 = 1;
//	int	n2 = 2;
// 	ft_div_mod(&n1, &n2);
// 	printf("%i %i\n", n1, n2);
// }