/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varibeir <varibeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 09:56:08 by varibeir          #+#    #+#             */
/*   Updated: 2024/04/29 11:23:18 by varibeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*copy;
	int		i;

	i = 0;
	copy = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (copy == NULL)
		return (NULL);
	while (*s)
		copy[i++] = *s++;
	copy[i] = '\0';
	return (copy);
}
/*int main() 
{
    const char *original = "Hello, world!";
    char *duplicate = ft_strdup(original);

    if (duplicate) 
    {
        printf("Original string: %s\n", original);
        printf("Duplicate string: %s\n", duplicate);
         free(duplicate);
    }

    return (0);
}*/
