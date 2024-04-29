/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varibeir <varibeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 08:11:25 by varibeir          #+#    #+#             */
/*   Updated: 2024/04/29 15:24:31 by varibeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	c;
	size_t	d;

	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	c = ft_strlen(dest);
	d = 0;
	while (src[d] != '\0' && c + 1 < size)
	{
		dest[c] = src[d];
		c++;
		d++;
	}
	dest[c] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[d]));
}
/* int main()
{
	char src[15] = "hello world";
	char dest[20] = "asd";
	size_t result;
	size_t result1;

	printf("Dest before concatenation: %s\n", dest);
	printf("Concatenated string: %s\n", src);
	result = ft_strlcat(dest, src, 3);
	printf("Dest after concatenation: %s\n", dest);
	printf("Length of concatenation: %d\n", result);
	return (0);
} */