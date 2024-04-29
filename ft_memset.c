/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varibeir <varibeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:07:41 by varibeir          #+#    #+#             */
/*   Updated: 2024/04/29 15:15:01 by varibeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;

	p = b;
	while (len > 0)
	{
		*p = c;
		p++;
		len--;
	}
	return (b);
}
/* int main()
{
	char  str[10] = "trabalhop";
	
	printf("buffer antes de memset : %s\n", str);
	ft_memset(str, 't', 9);
	printf("buffer depois de memset : %s\n", str);

	return (0);
} */