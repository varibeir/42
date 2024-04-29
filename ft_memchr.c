/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varibeir <varibeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 08:33:38 by varibeir          #+#    #+#             */
/*   Updated: 2024/04/29 16:24:24 by varibeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int value, size_t num)
{
	unsigned char	*s;
	size_t			i;

	i = 0;
	s = (unsigned char *)str;
	while (i < num)
	{
		if (s[i] == (unsigned char)value)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}
/* int main()
{
	char c[20] = "test string\n";

	printf(" %s", ft_memchr(c, 't',  11));
	return (0);
} */