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

void	ft_putstr(char *str);

void	ft_putstr_non_printable(char *str)
{
	while (*str != '\0')
	{
		if ((*str >= 32 && *str <= 126))
		write(1, str, 1);
		str++;
	}
}