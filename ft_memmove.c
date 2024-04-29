/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varibeir <varibeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 09:45:53 by varibeir          #+#    #+#             */
/*   Updated: 2024/04/29 13:34:20 by varibeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char			*new;
	const unsigned char		*old;

	if (src == dest || src == NULL || dest == NULL || n == 0)
		return (dest);
	new = dest;
	old = src;
	if (new > old)
	{
		while (n-- > 0 && (src || dest))
			new[n] = old[n];
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
/* int    main(void)
{
    char src[] = "cavalo";
    char dest[] = "madeira";

    ft_memmove(dest, src, 4);
	printf("%s\n", dest);
    return (0);
} */