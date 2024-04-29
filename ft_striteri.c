/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varibeir <varibeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 08:28:43 by varibeir          #+#    #+#             */
/*   Updated: 2024/04/29 11:24:19 by varibeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*22 - usando "&" posso acessar a memoria /
 23 - e assim ter a possibilidade de modificar a string

void print_index_and_character(unsigned int index, char *c)
{
 	printf("Index: %u, Character: %c\n", index, *c);
}

int main()
{
         char str[] = "Hello";

    ft_striteri(str, print_index_and_character);

    return (0);
 }*/
