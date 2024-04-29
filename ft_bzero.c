/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varibeir <varibeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:30:54 by varibeir          #+#    #+#             */
/*   Updated: 2024/04/29 15:09:26 by varibeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t len)
{
	unsigned char	*p;
	size_t			counter;

	counter = 0;
	p = str;
	while (counter < len)
	{
		p[counter++] = 0;
	}
}
/* int main()
{
	char test[] = "testing string";
	printf("before function: %s\n", test);
	ft_bzero (test, 14);
	printf("after function: %s\n", test);
} */