/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburgsta <aburgsta@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 12:27:04 by aburgsta          #+#    #+#             */
/*   Updated: 2025/08/12 15:31:07 by aburgsta         ###   ########.fr       */
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
