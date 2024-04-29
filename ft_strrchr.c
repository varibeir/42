/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varibeir <varibeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 08:29:52 by varibeir          #+#    #+#             */
/*   Updated: 2024/04/29 18:13:39 by varibeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*last;

	last = 0;
	while (*str != '\0')
	{
		if (*str == c)
		{
			last = str;
		}
		str++;
	}
	return ((char *)last);
}
/* int	main(void)
{
	char *str = "teste string";
	int c = 'p';
	char *result;

	result = ft_strrchr(str, c);
	if (result)
		printf("O carater '%c' foi encontrado na string, resultado: %s\n", c,
			result);
	else
		printf("O carater '%c' nao foi encontrado na string, resultado: %s\n",
			c, result);
	return (0);
} */