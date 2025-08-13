/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburgsta <aburgsta@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 12:43:20 by aburgsta          #+#    #+#             */
/*   Updated: 2025/08/13 19:00:07 by aburgsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_char_is_alpha(char str);
char	*ft_strlowcase(char *str);

char	*ft_strcapitalize(char *str)
{
	int	i;

	ft_strlowcase(str);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0)
				str[i] -= 32;
			else if (!ft_char_is_alpha(str[i - 1]))
				if (!(str[i - 1] >= '0' && str[i - 1] <= '9'))
					str[i] -= 32;
		}
		i++;
	}
	return (str);
}

int	ft_char_is_alpha(char str)
{
	if (!((str >= 'a' && str <= 'z') || (str >= 'A' && str <= 'Z')))
		return (0);
	return (1);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z'))
			str[i] += 32;
		i++;
	}
	return (str);
}

// #include <stdio.h>

// int	main()
// {
// 	char test[] = "hi, how are you? 42Words forty-two; fifty+and+one";
// 	printf("got: %s\n", ft_strcapitalize(test));
// }