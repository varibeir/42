/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varibeir <varibeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 08:26:08 by varibeir          #+#    #+#             */
/*   Updated: 2024/04/29 18:17:43 by varibeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*s;

	s = (char *)str;
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == '\0' && c == '\0')
		return (s);
	return (NULL);
}
/* int main()
{
	char *str;
	int c;

	str = "test string";
	c = 'n';

	printf("%s\n", ft_strchr("test string", 'n'));
	return(0);
} */