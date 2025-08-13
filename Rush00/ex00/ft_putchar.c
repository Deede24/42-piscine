/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalbrech <lalbrech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 10:50:59 by lalbrech          #+#    #+#             */
/*   Updated: 2025/08/03 17:20:53 by lalbrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_str(char *str, int size)
{
	write(1, str, size);
}

void	ft_putchar(char a)
{
	write(1, &a, 1);
}
