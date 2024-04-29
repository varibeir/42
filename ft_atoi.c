/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varibeir <varibeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 09:20:07 by varibeir          #+#    #+#             */
/*   Updated: 2024/04/29 18:12:23 by varibeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	nb;
	int	signal;

	nb = 0;
	signal = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
		{
			signal = -signal;
		}
		str++;
	}
	while (*str <= '9' && *str >= '0')
	{
		nb *= 10;
		nb += *str - 48;
		str++;
	}
	return (signal * nb);
}
/* int	main(void)
{
	char 	str[] = "3254236";
	printf("%d\n", ft_atoi(str));
	return(0);
} */