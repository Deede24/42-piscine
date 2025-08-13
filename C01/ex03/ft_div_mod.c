/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburgsta <aburgsta@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 12:27:04 by aburgsta          #+#    #+#             */
/*   Updated: 2025/08/13 18:57:37 by aburgsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	local_div;
	int	local_mod;

	local_div = a / b;
	local_mod = a % b;
	*div = local_div;
	*mod = local_mod;
}

// #include <stdio.h>
//
// int	main(void)
// {
// 	int n1;
//	int	n2;
//	int	out1;
//	int	out2;
//
//	n1 = 1;
//	n2 = 2;
// 	ft_div_mod(n1, n2, &out1, &out2);
// 	printf("%i %i\n", out1, out2);
// }