/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varibeir <varibeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:05:48 by varibeir          #+#    #+#             */
/*   Updated: 2024/04/29 15:14:47 by varibeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*old;
	unsigned char		*mem;
	size_t				counter;

	mem = dest;
	old = src;
	counter = 0;
	while (counter < n && (src || dest))
	{
		mem[counter] = old[counter];
		counter++;
	}
	return (dest);
}

/* int main()
{
	char src[] = "ola tudo bem";
	char dest[13] = "";

	printf("%s\n", ft_memcpy(dest, src, 7));
	return (0);
} */