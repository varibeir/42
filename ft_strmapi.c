/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varibeir <varibeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 15:34:54 by varibeir          #+#    #+#             */
/*   Updated: 2024/04/29 15:27:08 by varibeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*dest;
	size_t	i;

	i = 0;
	dest = (char *)malloc(ft_strlen(s) + 1);
	if (!dest)
		return (NULL);
	while (s[i])
	{
		dest[i] = f(i, s[i]);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/* char upper(unsigned int index, char c)
{
	if (c >= 'a' && c <= 'z')
		return (c -= 32);
	return (c);
}

int	main(void)
{
	char *str = "teste St4InG";

	printf("Original string: %s\n", str);
	char *new_str = ft_strmapi(str, &upper);
	printf("Modified string: %s\n", new_str);
	free(new_str);
	return (0);
} */