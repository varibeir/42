/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varibeir <varibeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 08:01:46 by varibeir          #+#    #+#             */
/*   Updated: 2024/04/29 15:24:42 by varibeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	x;
	unsigned int	i;

	x = ft_strlen(src);
	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (x);
}
/* int main()
{
	char src[] = "Hello, world!"; 
	char dest[20] = "";
	size_t result;

	printf("Dest before copy: %s\n", dest);
	printf("Copied string: %s\n", src);
	result = ft_strlcpy(dest, src, sizeof(dest));
	printf("Length of src : %d\n", result);
	printf("dest after copy: %s\n", dest);
	return (0);

} */