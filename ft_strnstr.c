/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varibeir <varibeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 09:14:44 by varibeir          #+#    #+#             */
/*   Updated: 2024/04/29 14:59:23 by varibeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t n)
{
	size_t	i;
	size_t	j;
	char	*s1;
	char	*s2;

	s1 = (char *)str1;
	s2 = (char *)str2;
	i = 0;
	if (*s2 == '\0')
		return (s1);
	while (s1[i] && i < n)
	{
		j = 0;
		while (s1[i + j] && s2[j] && (i + j) < n)
		{
			if (s1[i + j] != s2[j])
				break ;
			j++;
			if (!(s2[j]))
				return (s1 + i);
		}
		i++;
	}
	return (NULL);
}
/* int	main(void)
{
	char a[] = "testing my string";
	char b[] = "my";

	printf("%s\n", ft_strnstr(a, b, 15));
	return(0);
} */